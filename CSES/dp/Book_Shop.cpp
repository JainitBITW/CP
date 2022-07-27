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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> m;
         vector<int> price(n), page(n);
         vector<vector<int>> dp(n+1,vector<int>(m+1,0));
        FOR(i, 0, n)
            cin >> price[i];
        FOR(i, 0, n)
            cin >> page[i];
        for (int i = 1; i <=n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                dp[i][j] = dp[i - 1][j];
                int left = j - price[i - 1];
                if (left >= 0)
                {
                    dp[i][j] = max(dp[i][j], dp[i - 1][left] + page[i - 1]);
                }
            }
        }
        cout << dp[n][m];
    }
    return 0;
}