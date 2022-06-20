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
ll min ( ll a, ll b )
{
    if( a> b )return b; 
    return a;
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
        ll a ; 
        cin>>a>>n>>m>>q;

        int k = 4 - (a%4);

        if( k==1 )
        {
            cout<<min( { 3*q ,n , m+q}); 
            nl;
        }
        else if( k==2 )
        {
            cout<<min( {2*n , m, 2*q} );
        }
       else  if( k==3 )
        {
            cout<< min({3*n  ,  n+m  , q, });

        }
        else{
            cout<<0;
        }
        



        
    }
return 0;
}