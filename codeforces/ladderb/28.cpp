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
int m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin>>t;
    while (t--)
    {
        cin >> n >> m;
      vll v(m);
      if ( m==0 )
      {
          puts ("YES");
          return 0 ;
      }
      FOR ( i , 0 , m )cin>>v[i];

      sort ( ALL( v));
      if ( v[0]==1 or v[m-1]==n)
      {
           puts( "NO");
              return 0 ;
      }
      FOR ( i , 0  , m-2)
      {
          if ( abs( v[i]-v[i+1]) ==1 and abs( v[i+1]-v[i+2]) ==1   )
          {
              puts( "NO");
              return 0 ;
          }
      }
puts("YES");

    }
    return 0;
}