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
const ll MOD = 1000000007;
ll m, n, q;
vll pre(MAX);
vll f(MAX,-1);

ll solve(int a)
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

    ll ans = solve(a - m);
    ans %= MOD;
    ans += solve(a - 1);
    ans %= MOD;

    f[a] = ans;

    return f[a];
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;

    cin >> t >> m;
    solve(100005);
    FOR(i, 1, 100005)
    {
        pre[i] = pre[i - 1] + f[i];
        pre[i] %= MOD;
        
    }
    while (t--)
    {
        cin >> n >> q;

        cout << (pre[q]-pre[n-1]+MOD)%MOD;
        nl;
    }
    return 0;
}