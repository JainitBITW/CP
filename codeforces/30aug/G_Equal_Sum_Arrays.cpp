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

vll f(30, -1);

ll fin(int a)
{
    if (a < 0)
    {
        return 0;
    }
    if (a == 0)
    {
        return 1;
    }
    if (f[a] != -1)
    {
        return f[a];
    }
    ll ans = 0;

    FOR(i, 1, 21)
    {
        ans += fin(a - i);
    }
    return f[a] = ans;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        cin >> n;

        fin(n);

        cout << f[n];
        nl;
    }
    return 0;
}