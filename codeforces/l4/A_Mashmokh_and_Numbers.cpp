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
    //   cin>>t;
    while (t--)
    {
        cin >> n >> m;

        if (n / 2 > m || n == 1)
        {
            if (n == 1 && m == 0)
            {
                cout << 1;
                return 0;
            }
            cout << -1;
            return 0;
        }

        else
        {
            ll x = m - (n / 2) + 1;
            if (x > 0)
            {
                cout << x << ' ' << 2 * x << " ";
                n -= 2;
            }
            FOR(i, 2 * x + 1, 1 + n + 2 * x)
            cout << i << " ";
        }
    }
    return 0;
}