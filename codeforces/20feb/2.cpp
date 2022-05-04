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

        int ans = 0;

        cin >> n;
        int v[n];
        FOR(i, 0, n)
        cin >> v[i];
        vi s;
        FOR(i, 1, n - 1)
        {
            if (v[i] > v[i - 1] and v[i] > v[i + 1])
            {
                s.PB(i);
            }
        }

        ans = s.size();
        vi changed(ans);
        if (ans == 1)
        {
            v[s[0]] = max(v[s[0] - 1], v[s[0] + 1]);
        }
        FOR(i, 1, s.size())
        {

            if (((s[i] - s[i - 1]) == 2)and (!changed[i])and(!changed[i-1]))
            {

                v[s[i] - 1] = max(v[s[i]], v[s[i - 1]]);
                ans--;

                changed[i] = 1;
                changed[i - 1] = 1;
            }
        }
        FOR(i, 0, s.size())
        {
            if (!changed[i])
            {
                // cout << s[i];
                
                v[s[i]] = max(v[s[i] - 1], v[s[i] + 1]);
            }
        }
        cout << ans;
        nl;
        FOR(i, 0, n)
        cout << v[i] << " ";
        nl;
    }
    return 0;
}