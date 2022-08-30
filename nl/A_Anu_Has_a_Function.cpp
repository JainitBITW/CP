#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i = > a; i--)
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
        vi v(n + 1);
        FOR(i, 1, n + 1)
        {
            cin >> m;
            v[i] = m;
        }

        vi p(n + 1), s(n + 2);
        FOR(i, 1, n + 1)
        {
            p[i] = p[i - 1] | v[i];
        }
        for (int i = n; i >= 0; i--)
        {
            s[i] = s[i + 1] | v[i];
        }
        ll ans = -INT_MAX;
        ll in = -1;
        FOR(i, 1, n + 1)
        {
            int  y= (p[i - 1] | s[i + 1]) ;
            if (((v[i] |y)- y) > ans)
            {
                ans = (v[i]) & (~(p[i - 1] | s[i + 1]));
                in = i;
               
            }
        }
        cout << v[in] << " ";
        FOR(i, 1, n + 1)
        {
            if (in != i)
                cout << (v[i]) << " ";
        }
    }
    return 0;
}