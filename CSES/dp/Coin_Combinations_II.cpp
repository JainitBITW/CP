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
const ll MOD = 1e9 + 7;
vll coins(MAX);

vll dp(MAX, 0);

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        cin >> n >> m;
        FOR(i, 0, n)
        {
            cin >> q;
            // dp[q] = 1;
            coins[i] = q;
        }
        dp[0] = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int weight = 0; weight <= m; weight++)
            {
                if (weight - coins[i - 1] >= 0)
                {
                    dp[weight] += dp[weight - coins[i - 1]];
                    dp[weight] %= MOD;
                }
            }
        }
        cout << dp[m];
    }
    return 0;
}