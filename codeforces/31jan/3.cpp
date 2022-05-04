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
int m, n, q;

int main()
{
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {

        long long h1, d1, h2, d2, k, a, b;
        long long h1c, d1c;
        bool wow = false;

        cin >> h1 >> d1 >> h2 >> d2 >> k >> a >> b;
        

        for (ll i = k, j = 0; i >= 0, j <= k; i--, j++)
        {
            h1c = h1 + (i * b);
            d1c = d1 + (j * a);
            int x,z ; 


            if ((h2 / d1c) <= (h1c / d2))
            {
                if ( h1c %d2 == 0 &&  h2 %d1c!= 0 &&((h2 / d1c) == (h1c / d2)) )
                continue;
                else{

                wow = true;
                cout << "YES";
                nl;
                break;
                }
            }
        }
        
        
        if (!wow)
            cout << "NO\n";
    }
    return 0;
}