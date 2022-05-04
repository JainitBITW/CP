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
    // cin >> t;
    while (t--)
    {
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == x2)
        {
            int z = y2 - y1;
            cout << x1 + z<<" " << y1<<" " << x2 + z <<" "<< y2;
        }
        else if (y1 == y2)
        {
            int z = x2 - x1;
            cout << x1<<" "  << y1 + z <<" " << x2 <<" " << y2 + z;
        }

        else if ( abs( x1 - x2 )==abs ( y2- y1 ))
        {
            cout<<x1<<" "  <<y2 <<" " <<x2<<" "  <<y1 ;
        }
        else cout<<-1;
    }
    return 0;
}