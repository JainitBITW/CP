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
const ll MOD = 1000000007;
ll m, n, q;

ll max(ll a, ll b)
{
    return (a > b ? a : b);
}
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
        vll v(n);
        FOR(i, 0, n)
        {
            cin >> v[i];
        }
        ll last = LLONG_MIN;
        ll maxi = 0;
        FOR(i, 0, n)
        {

            if (v[i] < last)
            {
                maxi = max(maxi, abs(v[i] - last));
            }
            else
            {
                last = v[i];
            }
        }

        ll x = 0;
        while ((1LL << x) <= maxi)
        {
            x++;
        }
        cout << x;
        nl;
    }
    return 0;
}