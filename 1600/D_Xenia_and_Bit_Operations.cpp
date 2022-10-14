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
#define MAX 11111111
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
const ll MOD= 1000000007;
ll m, n, q;
vll ans(MAX);
vll tree( MAX);

void build ( ll ind , ll low  , ll high )
{
    if( low == high )
    {
        tree[ind]=ans[low];
    }
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
        cin>>n; 
        cin>>m; 
        for (int i = 0; i < 1LL<<n; i++)
        {
            cin>>ans[i];
        }
        
        

        
    }
return 0;
}