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
    if (a > b)
        return a;
    return b;
}

void solve()
{
    cin >> n;
    string s;
    cin >> s;
    vll v(n);
    FOR(i, 0, n)
    cin >> v[i];
    ll best = -1;
    ll best2 = -1;
    ll ans = 0;
    int j;
    for (j = 0; j < n; j++)
    {
        if (s[j] != 'R')
        {
            if (best >= j)
            {
                ans++;
                best2 = max(best2, j + v[j]);
            }
            else if (j == (n - 1))
            {
                ans = -1;
                cout << ans;
                nl;
                return;
            }

            j++;
            break;
        }
        best = max(best, j + v[j]);
    }
    for (int i = j; i < n; i++)
    {

        if (s[i] == 'B')
        {
            if (best >= i)
            {
                best2 = max(best2, i + v[i]);
            }
            else if (best2 >= i)
            {
                best = best2;
                best2 = max(best2, i + v[i]);

                ans++;
            }
            else
            {

                cout << -1;
                nl;
                return;
            }
        }
        best2 = max(best2, i + v[i]);
    }
    cout << ans;
    nl;
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
        solve();
    }
    return 0;
}