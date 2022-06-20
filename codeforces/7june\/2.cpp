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
        cin >> n;
        vi v(n);
        vi w;
        int aa = -1;
        int f = 0;
        FOR(i, 0, n)
        {
            cin >> v[i];
        }

        FOR(i, 0, n)
        {
            cin >> m;
            if (m > v[i])
            {
                f = 1;
                continue;
            }
            if (m == 0)
            {
                aa = max(aa, v[i]);
                continue;
            }
            w.PB(v[i] - m);
        }
        int as = w.size();
        for (int i = 0; i < as - 1; i++)
        {
            if (w[i] != w[i + 1] || (aa > w[i]))
            {
                f = 1;
                break;
            }
        }w.PB(aa);
        if ( w[0] < aa)
            f = 1;
        if (f)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        nl;
    }
    return 0;
}