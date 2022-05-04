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
        string s;
        cin >> s;
        n= s.size();
        int z = count(ALL(s), '0');
        int x = count(ALL(s), '1');
        if (s.size() == 2 || s.size() == 1)
        {
            cout << 0;
            nl;

            continue;
        }
        if (x == z)
        {
            cout << x-1;
            nl;

            continue;
        }

        if (x == n || z == n)
        {
            cout << 0;
            nl;

            continue;
        }

        cout << min(x, z);
        nl;
    }
    return 0;
}