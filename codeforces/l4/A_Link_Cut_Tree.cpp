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
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
//   cin>>t; 
    while (t--)
    {
        int flag =0;
        cin>>n>>m>>q;

        for( ll i =1  ; i<=m && i <=LLONG_MAX ;i*=q )
        {
            if( i >= n )
            {
                
                    cout<<i<<" ";
                    flag=1;
                
            }
            if( LLONG_MAX/i  < q )
            break;
        }
        if( flag!=1)
        {
            cout<<-1;
            nl;
        }

        
    }
return 0;
}