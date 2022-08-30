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
#define MOD 1000000007 
#define MAX (long long )1e5 + 7 
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
vi graph[MAX];
vi visited(MAX);


int dfs( int a )
{
    visited[a]=1;
    int ans =0;
    for( auto &el : graph[a])
    {
        if( visited[el]==0)
        ans += dfs( el);

    }
    return ans+1 ;
}

ll mul ( ll a, ll b)
{
    ll ans =1; 
    FOR( i , 0 , b)
    {
        ans*=a ;
        ans%=MOD;
       
    }

    //   cout<<ans;
    // nl;
    return ans ; 
  
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

        cin>>n>>m;

        ll ans =1;
        FOR( i, 0 , m )
        {
            ans*=n;
            ans%=MOD;
        }
        // cout<<ans;
        nl;
        int f=0;
        FOR( i , 0 , n- 1)
        {
            int a , b, c; 
            cin>>a>>b; 
            cin>>c; 
            if( c==0)
            {
                graph[a].PB(b);
                graph[b].PB(a);
                f=1;

            }
        }
     
ll to =0;
        FOR( i ,1, n+1 )

        {
            if( visited[i]==0)
            {
                ll a = dfs(i);
                to += mul( a, m);
                // cout<< mul(a , m );
                // nl;
                // cout<<a;nl;
                to%=MOD;
                // cout<<a;nl;
            }
        }
        cout<< ( ans-to +MOD)%MOD;




        

        
    }
return 0;
}