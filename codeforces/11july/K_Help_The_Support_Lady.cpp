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
  cin>>t; 
   FOR(  i , 1, t+1)
   {
    cin>>n;
    vll v( n );
    FOR( i , 0 , n )cin>>v[i];

    sort(ALL(v));

    ll total = 0;
    ll ans =0 ;
    FOR( j , 0 , n )
    {
        if( total<=v[j])
        {
            total+=v[j];
            ans++;


        }

        else continue;

    }

    printf("Case #%d: %lld\n", i ,ans );
   
   }
return 0;
}