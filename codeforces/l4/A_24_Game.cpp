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
    // cin >> t;
    while (t--)
    {
        cin >> n;
        if (n >= 4)
        {
            cout << "YES";
            nl;
            if (n % 2 == 0)
            {
                m = (n - 4) / 2;

                ll j = 5;
                cout << 1 << " * " << 2 << " = " << 2;
                nl;
                cout << 2 << " * " << 3 << " = " << 6;
                nl;
                cout << 6 << " * " << 4 << " = " << 24;
                nl;

                for (int i = 0; i < m; i++)
                {
                    cout << j + 1 << " - " << j << " = " << 1;
                    j += 2;
                    nl;
                    cout << 24 << " * " << 1 << " = " << 24;
                    nl;
                }
            }
            else
            {
                m = (n - 5) / 2;

                ll j = 6;
                cout << 2 << " - " << 1 << " = " << 1;
                nl;
                cout << 5 << " * " << 4 << " = " << 20;
                nl;
                cout << 20 << " + " << 3 << " = " << 23;
                nl;
                cout << 23 << " + " << 1 << " = " << 24;
                nl;

                for (int i = 0; i < m; i++)
                {
                    cout << j + 1 << " - " << j << " = " << 1;
                    j += 2;
                    nl;
                    cout << 24 << " * " << 1 << " = " << 24;
                    nl;
                }
            }
        }
        else
        {
            cout << "NO";
            nl;
        }
    }
    return 0;
}