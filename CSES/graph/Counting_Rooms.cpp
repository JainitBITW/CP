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
vector<string> v; 

int visited[1010][1010];
void dfs( int i , int j )
{
    if( visited[i][j] || v[i][j]=='#' )return ; 

    visited[i][j]=1;
    if( i< n-1 )
    {
        dfs( i+1 , j );
    }
       if( i> 0 )
    {
        dfs( i-1 , j );
    }
       if( j< m-1 )
    {
        dfs( i , j+1 );
    }
       if( j>0 )
    {
        dfs( i, j-1 );
    }

return;

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
        
        FOR( i , 0 , n )
        {
            string s; 
            cin>>s;
            v.PB( s);

        }

        FOR( i , 0 , n )
        {
            FOR( j , 0 ,  m )
            {
                if( !visited[i][j] && v[i][j]=='.')
                {
                    dfs(i,j);
                    q++;
                }
            }
        }
        cout<<q;
        

        
    }
return 0;
}