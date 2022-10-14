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
vll v(3), w(3), x(3);

bool isa(ll a)
{
    ll z = m;
    FOR(j, 0, 3)
    {
        ll i = v[j] * a;
        if (w[j] < i)
        {
            z -= (x[j] * (i - w[j]));
        }
    }
    return z >= 0;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        string s;
        cin >> s;

        v[0] = count(ALL(s), 'B');
        v[1] = count(ALL(s), 'S');
        v[2] = count(ALL(s), 'C');
        FOR(i, 0, 3)
        cin >> w[i];

        FOR(i, 0, 3)
        cin >> x[i];

        cin >> m;

        ll lo = 0, hi = 1e14;
        ll mid;

        while (lo < hi)
        {

            mid = (lo + hi) / 2;
            if (mid == lo)
            {

                break;
            }
            if (isa(mid))
            {
                lo = mid;
            }
            else
            {
                hi = mid - 1;
            }
        }
        if (isa(hi))
        {
            cout << hi;
        }
        else if (isa(lo))
        {
            cout << lo;
        }
        else
        {
            cout << 0;
        }
    }
    return 0;
}