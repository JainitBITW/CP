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
{freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
    JALDI jaldi

        int t = 1;
    while (t--)
    {

        cin >> n >> m;
        vi v(n);
        FOR ( i , 0 , n )cin>>v[i];


        for ( int i = m-1 ; i<n+1 ; i++ )
        { 
            if ( i==n ) i = 0 ;
            if ( v[i]>= 1 )
            {
                cout<<i+1;
                break ;
            }
           
        }

        
    
    }
    return 0;
}