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

int cmp(int a, int b) { return a > b; }

vll gr[MAX];
vll visited(MAX);
vll visi(MAX);

vll tot(MAX);

ll dfs(ll a, ll b, vll &sub)
{

    tot[a] = tot[b] + 1;

    visi[a] = 1;
    for (auto &el : gr[a])
    {
        if (el == b)
            continue;

        visi[a] += dfs(el, a, sub);
    }
    sub[a] = visi[a] - tot[a];
    return visi[a];
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

        cin >> n >> m;
        vll sub(n + 1);
        FOR(i, 1, n)
        {
            int a, b;
            cin >> a >> b;
            gr[a].PB(b);
            gr[b].PB(a);
        }
        dfs(1, 0, sub);

        sort(++sub.begin(), sub.end(), greater<ll>());

        ll ans = 0;
        FOR(i, 1, n - m+1)
        {
            ans += sub[i];
        }

        cout << ans;
    }
    return 0;
}