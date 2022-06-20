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
        cin>>n; 
        vi v(n), w(n);
        FOR( i , 0 , n )
        {
            cin>>v[i];
            w[i]=v[i];
        }

        sort( ALL(w));

        FOR(i, 0 , n-1 )
        {
            if( w[i]==v[i])
            {
                swap(w[i], w[i+1]);
            }


        }
        if( n>1 && v[n-1]==w[n-1])
        {
            swap(w[n-1], w[n-2]);
        }
        if( n==1)
        {
            cout<<-1;
nl;
continue;
        }

        FOR( i , 0 , n )
        {
            cout<<w[i]<<" ";

        }
        nl;

        
    }
return 0;
}