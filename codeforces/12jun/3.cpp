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
        string s ,t; 
        cin>>s>>t; 
        string a ,b ; 
        int flag =0;
        int co=0,co1=0;
        FOR( i , 0 , n )
        {
            if( s[i]!= 'b')
            
            {
                a.PB(s[i]);
            }
            else
            {
                flag=1;
            }
            if( flag && s[i]=='a')
            {
                co++;
            }
            if( !flag && s[i]=='c')
            {
                co1++;
            }
        }
        flag=0;
        FOR( i , 0 , n )
        {
            if( t[i]!= 'b')
            
            {
                b.PB(t[i]);
            }
            else
            {
                flag=1;
            }
            if( flag && t[i]=='a')
            {
                co--;
            }
             if( !flag && t[i]=='c')
            {
                co1--;
            }

        }
        sort( ALL( s));
        sort( ALL( t));
        if( s!= t || a!= b  || co1>0|| co>0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES";
        }
        
        nl;


        
    }
return 0;
}