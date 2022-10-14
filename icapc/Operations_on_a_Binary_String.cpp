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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        string s;
        cin >> s;
        vll mp;

        ll count = 0;
        ll ans = 0;

        FOR(i, 0, n)
        {
            if (s[i] == '1')
                ans++;
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                if (count)
                    mp.PB(count);
                count = 0;
            }
        }
        if (count)
            mp.PB(count);

        sort(ALL(mp), greater<ll>());

        q = mp.size();

        FOR(i, 0, q)
        {
            if (mp[i] > ((m - 1) / 2))
            {
                ans += (m - 1) / 2;
                m -= m;
            }
            else
            {
                ans += mp[i];
                m -= ((2 * (mp[i])) + 1);
            }
            if (m == 0)
                break;
        }
        cout << (ans);
        nl;
    }
    return 0;
}