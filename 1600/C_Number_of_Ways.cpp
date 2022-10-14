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
#define MOD (long long)1e9 + 7
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
        cin >> n;
        vll v(n);
        FOR(i, 0, n)
        {
            cin >> v[i];
        }

        FOR(i, 1, n)
        {
            v[i] += v[i - 1];
        }

        if (v[n - 1] % 3)
        {
            cout << 0;
            nl;
            continue;
        }

        if (v[n - 1] == 0)
        {
            ll ci = count(ALL(v), 0);

            cout << ((ci - 1) * (ci - 2)) / 2;
            nl;
            return 0;
        }

        vector<ll> a(n, 0);
        vi b;

        ll ans = 0;

        FOR(i, 0, n)
        {
            if (i > 0)
                a[i] += a[i - 1];
            if (v[i] == ((v[n - 1]) / 3))
            {
                a[i]++;
            }

            //     cout << a[i];
            //    ; nl

            if (v[i] == (v[n - 1] / 3) * 2)
            {
                b.PB(i);
            }
        }

        FOR(i, 0, b.size())
        {
            ans += a[b[i]];
        }

        cout << ans;
    }
    return 0;
}