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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.S > b.S;
}
int l[1000010];
int r[1000010];

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n;
        vi v(n);

        vi ans;
        map<int, int> mp;
        FOR(i, 0, n)
        {
            cin >> v[i];
            mp[v[i]]++;
            l[v[i]] = i;
            if (r[v[i]] == 0)
                r[v[i]] = i;
        }
        r[v[0]] = 0;
        vpi w;
        for (auto &e : mp)
        {
            w.PB({e.F, e.S});
        }
        sort(ALL(w), cmp);
        FOR(i, 0, w.size())
        {
            if (w[i].S == w[0].S)
            {
                ans.PB(w[i].F);
            }
            else
                break;
        }
        int ans1 = 0;
        int ans2 = INT_MAX;
        FOR(i, 0, ans.size())
        {
            if (l[ans[i]] - r[ans[i]] < ans2 - ans1)
            {
                ans1 =r[ans[i]];
                ans2 =l[ans[i]];
            }
        }
        cout << ans1 + 1 << " " << ans2 + 1;
    }
    return 0;
}