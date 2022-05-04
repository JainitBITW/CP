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
#define nl cout << endl
#define nl cout << endl
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
ll dp[100];

ll fib(int n)
{ // top down approach
    if (n == 0)
        return 1;
    if (n == 1)
        return 1;
    if (dp[n] != -1) // memois
        return dp[n];

    return dp[n] = fib(n - 1) + fib(n - 2);
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    memset(dp, -1, sizeof(dp));
    cout << fib(8);

    // bottom top approach
    dp[0] = 1;
    dp[1] = 1;

    FOR(i, 2, 9)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    cout<<dp[8];

    return 0;
}