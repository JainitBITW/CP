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
double m, n, q;

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
        cin >> m;
        vector<double> v(n), w(n);
        int f = 0;
        FOR(i, 0, n)
        {
            cin >> v[i];
            if (v[i] == 1)
                f = 1;
        }
        FOR(i, 0, n)
        {
            cin >> w[i];

            if (w[i] == 1)
                f = 1;
        }
        if (f)
        {
            cout << -1;
            return 0;
        }

        double z = m;
        z *= (w[0]) / (w[0] - 1);

        FOR(i, 1, n)
        {
            z *= v[i] / (v[i] - 1);
            z *= w[i] / (w[i] - 1);
        }
        z *= v[0] / (v[0] - 1);
        cout.precision(17);
        cout << z - m;
    }
    return 0;
}