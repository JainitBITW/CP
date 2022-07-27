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
vll coins(MAX);

vll dp(MAX, 0);

ll solve(ll a)
{
    if (a == 0)
    {
        return 0;
    }
    if( a< 0 )
    {
        return INT_MAX;
    }
    if( dp[a]!= 0 )return dp[a];
    ll ans = INT_MAX;
    FOR(i, 0, n)
    {
        ll temp = solve(a - coins[i]) + 1;

        ans= min(temp, ans);
    }

    return dp[a]= ans;
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
        cin >> n >> m;
        FOR(i, 0, n)
        {
            cin >> q;
            dp[q] = 1;
            coins[i] = q;
        }

        solve(m);

        if( dp[m]>=INT_MAX)
        {
            cout<<-1; 
        }
        else cout<<dp[m];
    }
    return 0;
}