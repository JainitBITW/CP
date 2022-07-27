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

        string s, t, u;
        cin>>s>>t>>u; 
        if( find(ALL(s) , '=')!= s.end())
        {
            int i = find( ALL(s),'=') - s.begin();
            i++;
            while( i < s.size())
            {
                
                if( s[i]!= '.')
                {
                    cout<<s[i];
                    return 0 ; 

                }
i++;

            }
            cout<<"You shall pass!!!";
            nl;
            return 0 ;
        }

         if( find(ALL(t) , '=')!= t.end())
        {
            int i = find( ALL(t),'=') - t.begin();
            i++;
            while( i < t.size())
            {
                
                if( t[i]!= '.')
                {
                    cout<<t[i];
                    return 0 ; 

                }
                i++;


            }
            cout<<"You shall pass!!!";
            nl;
            return 0 ;
        } if( find(ALL(u) , '=')!= u.end())
        {
            int i = find( ALL(u),'=') - u.begin();
            i++;
            while( i < u.size())
            {
                
                if( u[i]!= '.')
                {
                    cout<<u[i];
                    return 0 ; 

                }
                i++;


            }
            cout<<"You shall pass!!!";
            nl;
            return 0 ;
        }

        
    }
return 0;
}