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
const ll MOD = 1e9 +7 ;
ll m, n, q;

vll dp(MAX); 


    ll
    solve(ll a)
{
    if (a == 1)
        return 1;
    if( dp[a])return dp[a];

    ll ans = 0;
    FOR(i, 1, 7)
    {
        if (a - i <= 0)
            break;

        ans += solve(a - i) ;
        ans%= MOD;
    }
    if( a <= 6 )ans+=1; 
    
    return dp[a]=ans;
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
        cin>>n; 
        cout<<solve(n);
    }
    return 0;
}