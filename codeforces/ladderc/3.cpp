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
        vi v(n);
        vi x;
        vi y;

        FOR(i, 0, n)
        cin >> v[i];

        sort(ALL(v));

        int flag = 0;
        FOR(i, 0, n)
        {
            if (i < n - 2 and v[i] == v[i + 1] and v[i + 1] == v[i + 2])
            {

                cout << "NO";
                flag = 2;
            }
            if (flag == 2)
                break;
            if (i & 1)
                x.PB(v[i]);
            else
                y.PB(v[i]);
        }

        if (flag == 2)
        {
            continue;
        }
        else
        {
            cout << "YES" ;nl;

            int num = y.size();
            cout << num;
            nl;
            for (int i = 0; i < num; i++)
            {
                cout << y[i] << " ";
            }
            nl;
            num = x.size();
            cout << num;
            nl;
            for (int i = num - 1; i >= 0; i--)
            {
                cout << x[i] << " ";
            }
        }
    }
    return 0;
}