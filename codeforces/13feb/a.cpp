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

        cin >> n >> m;
        int a, b, c;
        vi v(n);
        vi w(n);
        vi coin(n);
        int maxi = INT_MIN;
        int mini = INT_MAX;

        FOR(i, 0, n)
        {
            cin >> a >> b >> c;
            v[i] = a;
            w[i] = b;
            coin[i] = c;
            maxi = max(maxi, b);
            mini = min(mini, a);
        }
        vi ans(maxi-mini+1);
        for (int i = 0; i < n; i++)
        {
            FOR(j, v[i]-mini, w[i] + 1-mini)
            {
                ans[j] += coin[i];
            }
        }
        if (maxi - mini <= m)
        {
            cout << accumulate(ALL(ans), 0);
            nl;
            continue;
        }
        int ansmax = -1;
        for (int i = 0; i <= maxi - m-mini; i++)
        {
            int sum = 0;
            FOR(j, i, i + m + 1)
            {
                sum += ans[j];
            }
            ansmax = max(sum, ansmax);
        }
        cout << ansmax;
        nl;
    }
    return 0;
}