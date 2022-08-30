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
   FOR( i , 1, t+1)
   {
    cin>>n>>m;
    int flag =0;
    if( n> (m*2))
    {
        flag =1;
    }
    map<int,int> mp;
    FOR( i ,  0 , n)
    {
        int a; 
        cin>>a;
        mp[a]++;
        if( mp[a]> 2)
        {
            flag=1;
        }
    }

    if( flag )
    {
        printf("Case #%d: NO\n",i);
    }
    else{
         printf("Case #%d: YES\n",i);
    }

   }
return 0;
}