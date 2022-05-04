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
const ll MOD = 1e9 + 7;
bool ispa(int a)
{
    string s = "";
    while (a > 0)
    {
        s += (a % 10 + '0');
        a /= 10;
    }
    string t;
  
    reverse(ALL(s));
    if (s == t)
        return true;
    return false;
}

ll dp[40001];

ll solve(int a)
{
    
    ll ans = 0;
    if (a == 1)
        return 1;
        if( a== 2)return 2;
  

    if (dp[a] != -1)
        return dp[a];

    if (ispa(a))
    {
      
        ans++;
    }
    for (int i = 1; i <=a / 2; i++)
    {
        ans += ispa(i) + solve(a - i);
    }
    return dp[a] = ans;
    
    
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi
    FOR(i, 0, 40001)
    {
        dp[i] = -1;
    }
    dp[1] = 1;
    dp[2] = 2;
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << solve(n);
        nl;
    }
    return 0;
}