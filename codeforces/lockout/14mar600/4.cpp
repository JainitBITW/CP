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
        ll ans = 0;
        FOR(i, 0, n)
        cin >> v[i];
        if (n == 1)
        {
            cout << v[0];
            nl;
            continue;
        }
       

        if (v[0] > v[1])
        {
            ans += v[0] - v[1];

            v[0] = v[1];
        }
        if (v[n - 1] > v[n - 2])
        {
            ans += v[n - 1] - v[n - 2];

            v[n - 1] = v[n - 2];
        }

        FOR(i, 1, n - 1)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                ans += min(v[i] - v[i - 1], v[i] - v[i+1]);
                v[i] -= min(v[i] - v[i+1], v[i] - v[i - 1]);
            }
        }

        FOR(i, 1, n )
        {
            ans += abs(v[i] - v[i - 1]);
        }
         ans += v[n - 1] ;
         ans += v[0] ;
        cout<<ans; 
        nl;
    }
    return 0;
}