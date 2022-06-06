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
    cin >> t;
    while (t--)
    {
        int flag = 0;
        cin >> n;
        vi v(n);

        FOR(i, 0, n)
        {
            cin >> v[i];
        }
        sort(ALL(v));
        vi w(n);
        int j = (n + 1) / 2;
        int k = 0;

        for (int i = 0; i < n; i++)
        {
            if (i & 1)
            {
                w[i] = v[j];
                j++;
            }
            else
            {
                w[i] = v[k];
                k++;
            }
        }
        FOR(i, 0, n)
        {
          
            if (((w[(i + 1) % n] > w[i] )&& (w[(i - 1+n) % n] > w[i])) || ((w[(i + 1) % n] < w[i] )&&(w[(i - 1+n) % n] < w[i])))
            {
              continue;
            }

            else
            {
                flag = 1;
                cout << "NO";
                nl;
                break;
            }
        }
        if (flag)
            continue;

        cout << "YES";

        nl;
        FOR(i, 0, n)
        {
            cout << w[i] << " ";
        }
        nl;
    }
    return 0;
}