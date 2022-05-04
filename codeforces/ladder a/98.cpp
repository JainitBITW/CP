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

    
        cin >> n;
        int x, y, sumx = 0, sumy = 0;
        bool g = false;

        FOR(i, 0, n)
        {
            cin >> x >> y;
            if (x % 2 != y % 2)
                g = true;
            sumx += x;
            sumy += y;
        }

        if (sumx % 2 == 0 && sumy % 2 == 0)
            cout << 0;
        else if (sumx % 2 != sumy % 2)
            cout << -1;
        else if (g)
            cout << 1;
        else
            cout << -1;
    
    return 0;
}