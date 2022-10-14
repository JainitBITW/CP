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
typedef vector<pair<int, int>> vpi;
ll m, n, q;
long long mod = 998244353;
long long mpow(long long b, long long ex)
{
    ll r = 1;
    while (ex)
    {
        if (ex & 1LL)
            r = (r * b) % mod;
        ex = ex >> 1;
        b = (b * b) % mod;
    }
    return r;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n >> m;
        if (n & 1)
        {
            cout << 1;
            return 0;
        }

        ll ans = 0;

        ll i = m / 2;
        ans += (i * i);
        ans %= mod;
        i = (m + 1) / 2;
        ans += (i * i);
        ans %= mod;

        i = (m * m) % mod;
        ans *= mpow(i, mod-2);

        cout << ans%mod;
        nl;
    }
    return 0;
}