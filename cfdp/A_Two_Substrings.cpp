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
       int a =0, b=0;
       int c =0, d=0;
        string s;
        cin >> s;
        vpi v, w;

        FOR(i, 0, s.size() - 1)
        {
            if (s[i] == 'A' && s[i + 1] == 'B')
            {
            
                if (a == 0)
                {
                   a= 1;
                    continue;
                    
                }
            }
            if (s[i] == 'B' && s[i + 1] == 'A')
            {
                
                if (b==0)
                {
                    b = 1;
                    continue;
                   
                }
            }
        }
        for( int i = s.size()-1 ; i>0 ; i--)
        {
            if (s[i] == 'A' && s[i -1] == 'B')
            {
            
                if (c == 0)
                {
                   c= 1;
                    continue;
                    
                }
            }
            if (s[i] == 'B' && s[i -1] == 'A')
            {
                
                if (d==0)
                {
                    d= 1;
                    continue;
                   
                }
            }
        }

        if (a && b && c && d)
        {
            cout << "YES";
        }
        else
            cout << "NO";

        nl;
    }
    return 0;
}