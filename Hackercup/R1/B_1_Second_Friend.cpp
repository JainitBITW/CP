#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
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
   

        int t = 1;
  cin>>t; 
  FOR( i , 1, t+1 )
  {
    cin>>n>>m; 
    vector<string> v(n);
    FOR( i, 0 , n)cin>>v[i];
    int flag =0;

    if( n== 1)
    {
        
        if( v[0][0] == '^' || v[n-1][m-1]=='^')
        {
            flag =1;
        } 
        else if ( m>1 && (v[0][m-2] == '^'|| v[0][2]=='^'))
        {
            flag =1;
        }

        if( flag )
        {
            printf("Case #%d: IMPOSSIBLE\n",i);
        }
        else 
        {
            
        }

        
    }
  }
return 0;
}