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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
  cin>>t; 
    while (t--)
    {

        cin>>n>>m; 
        vi v(n);
        ll ans =0;
        FOR( i , 0 , n )
        {
        
            cin>>v[i];
            ans+=v[i];    
        }

        if( m < n )
        {
            ll temp=0;
            ll ans1=INT_MIN;
            FOR( i , 0 , m )
            {
                temp+=v[i];

            }
            for (int i = 0, j= m; i < n && j <n ; i++, j++)
            {
                temp+=v[j];
                temp-=v[i];
                ans1=max(ans1, temp);
            }
            cout<<ans1;
            nl;
            continue;
            
        }
        else
        {
            

            


        }




        
    }
return 0;
}