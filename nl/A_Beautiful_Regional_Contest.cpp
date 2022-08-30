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
    cin >> t;
    while (t--)
    {
        cin >> n;

        map<ll, ll> v;

        FOR(i, 0, n)
        {
            cin >> m;
            v[(-1) * m]++;
        }

        vll ar;

        ll ans = 0;

        for (auto &el : v)
        {
            if (ans + el.S > n / 2)
            {
                break;
            }
            else
            {
             

                ar.PB(el.S);
                ans += el.S;
            }
        }

        if (ar.size() < 3)
        {
            cout << 0 << " " << 0 << " " << 0;
            nl;
        }
        else
        {
            ll g = 0, s = 0, b = 0;
            g = ar[0];
            int i = 0;
            for (i = 1; i < ar.size(); i++)
            {
                if (s > g)
                    break;
                else
                    s += ar[i];
            }
            if (s <= g)
            {
                cout << 0 << " " << 0 << " " << 0;
                nl;
                continue;
            }
            FOR(j, i, ar.size())
            {
                b += ar[j];
            }
            if (b <=g)
            {
                cout << 0 << " " << 0 << " " << 0;
                nl;

                continue;
            }
            cout << g << " " << s << " " << b;
            nl;
        }
    }
    return 0;
}