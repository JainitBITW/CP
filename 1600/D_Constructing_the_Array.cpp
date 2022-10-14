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
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vpi;
const ll MOD = 1000000007;
ll m, n, q;
vll v(MAX);
struct cmp
{
    bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
    {
        int lena = a.second - a.first + 1;
        int lenb = b.second - b.first + 1;
        if (lena == lenb)
            return a.first < b.first;
        return lena > lenb;
    }
};

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;

        set<pair<int, int>, cmp> s;
        s.insert({1, n});
        int i = 1;
        while (!s.empty())
        {
            auto temp = *s.begin();
            s.erase(s.begin());
            if (temp.F == temp.S)
            {
                v[temp.F] = i++;
                continue;
            }
            ll d = (temp.S + temp.F) / 2;
            v[d] = i++;
            if( d > temp.F)
            s.insert({temp.F, d - 1});
            if( d<temp.S)
            s.insert({d + 1, temp.S});
        }
        FOR(i, 1, n + 1)
        {
            cout << v[i] << " ";
        }
        nl;
    }
    return 0;
}