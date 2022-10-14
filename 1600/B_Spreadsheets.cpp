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
const ll MOD = 1000000007;
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string t = "";
        vector<string> e;
        ;
        int o = 1;

        FOR(i, 0, s.size())
        {
            if (o == 1 and (s[i] >= 'A') and s[i] <= 'Z')
            {
                t += s[i];
            }
            else if (o == -1 and (s[i] >= '0') and s[i] <= '9')
            {
                
                t += s[i];
            }
            else
            {
              
                o *= (-1);
                e.PB(t);
                t.clear();
                t+=s[i];
            }
        }
        if (t != "")
        {
            e.PB(t);
        }
        if (e.size() == 2)
        {
           
            ll a = 0, b = 0;
            reverse(ALL(e[0]));
            
            
            ll x = 1;
            for (auto &el : e[0])
            {
                a += x * (el - 'A' + 1 );
                x *= 26;
            }
            
            
            x = 1;
            b= stoi( e[1]);
            cout << 'R' << b << 'C' << a;
            nl;
        }
        else if( e.size() ==4)
        {
            ll b= stoi( e[3]);
        
            ll x=26;
            string y="";


            while( b>0 )
            {
                y+= char ((--b)%x+ 'A');
                b/=26;
                 
            }
            reverse(ALL(y));
            cout<< y;

            cout<< e[1];
            nl;

        }
    }
    return 0;
}