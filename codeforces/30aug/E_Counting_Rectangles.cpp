#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define MP make_pair
#define PB push_back
#define S second
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
#define MOD (long long)1e9 + 7
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

bool cmp(pair<ll, ll> &a, pair<ll, ll> &b)
{
    return a.S > b.S && a.F > b.F;
}
bool cmp1(pair<ll, ll> &a, pair<ll, ll> &p)
{
    return (a.F > p.F) && (a.S > p.S);
}
bool cmp2(pair<ll, ll> &a, pair<ll, ll> &p)
{
    return (a.F < p.F) && (a.S < p.S);
}

// vector<pair<ll, ll>> v(MAX);

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;

        vector<pair<ll, ll>> v(n);

        FOR(i, 0, n)
        {
            cin >> v[i].F >> v[i].S;
        }

        sort(ALL(v), cmp);

        vll areas(n + 1);
        areas[1] = v[0].F * v[0].S;
        FOR(i, 2, n + 1)
        {
            ll ne = v[i - 1].F * v[i - 1].S;
            areas[i] = ne + areas[i - 1];
        }

        for (auto el : v)
        {
            cout << el.F << " " << el.S;
            nl;
        }

        return 0;
    }
}