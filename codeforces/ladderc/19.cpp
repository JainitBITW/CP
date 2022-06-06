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
        cin >> n;
        ll m = n;

        vi fac;

        for (int i = 2; i * i <= n; i++)
        {
            int flag = 0;

            while (n % i == 0)
            {
                flag = 1;

                fac.PB(i);
                n /= i;
            }
            if (flag)
            {
                q++;
                cout << i;
                
            }
        }
        if (n != 1)
        {
            fac.PB(n);
            q++;
        }

        // for (auto &e : fac)
        // {
        //     cout << e << " ";
        // }
        // nl;
        n = fac.size();
        if (n <= 2)
        {
            
            cout << "NO";
            nl;
            continue;
        }
        ll a, b, c;
        if (q >= 2)
        {

            a = fac[0];
            b = fac[n - 1];
            c = (m / (b * a));
            if (c == 1)
            {

                cout << "NO";
                nl;
                continue;
            }

            cout << "YES";

            nl;

            cout << a << " " << b << " " << c;
            nl;
        }
    }
    return 0;
}