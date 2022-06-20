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
        cin >> n >> m;
        int maxi = 0;
        int ans = 0;
        string s;
        cin >> s;
        FOR(i, 0, m)
        {
            if (s[i] == 'W')
            {
                ans++;
            }
        }
        maxi = ans;
        if (m == 1)
        {
            int count = 0;
            FOR(i, 0, n)
            if (s[i] == 'B') count++;
            if (count)
                cout << 0;
            else
                cout << 1;
            nl;
            continue;
        }
        for (int i = 1, j = m; i < m and j < m; i++, j++)
        {
            if (s[i] == 'W')
            {
                maxi--;
            }
            if (s[j] == 'W')
            {
                maxi++;
            }
            ans = min(maxi, ans);
        }

        cout << ans;
        nl;
    }
    return 0;
}