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
int m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        ll a, b;
       ll i = 1;
        int flag = 0;
        ll n = 1;
        cin >> a >> b;
        while (a > 0)
        {
            if (b % 10 < (a % 10))
            {
                if ((b % 100) > 18 or (b % 100 <= 9))
                {
                    flag = 1;
                    break;
                }
                else
                {
                    n += ((b % 100) - (a % 10)) * i;
                    b /= 100;
                a /= 10;

                }
            }
            else{
              
                    n += ((b % 10) - (a % 10)) * i;

                a /= 10;
                b /= 10;
                  
            }
            i*=10;
            
        }
        if (flag )
        {
            cout << -1;
            nl;
            continue;
        }
        else
        {
           
              n += b* i;
              cout<<n-1;
              nl;
        }
    }
    return 0;
}