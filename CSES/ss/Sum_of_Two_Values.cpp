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
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t
    while (t--)
    {
        cin >> n >> m;
        vpi v(n);
        FOR(i, 0, n)
        {
            cin >> v[i].F;
            v[i].S = i + 1;
        }
        sort(ALL(v));
        int i = 0;
        int j = n - 1;

        while (i < j && j < n)
        {
            if (v[i].F + v[j].F == m)
            {
                cout << v[i].S << " " << v[j].S;
                return 0;
            }
            else if (v[i].F + v[j].F < m)
            {

                i++;
            }
            else
                j--;
        }

        cout << "IMPOSSIBLE";
        nl;
    }
    return 0;
}