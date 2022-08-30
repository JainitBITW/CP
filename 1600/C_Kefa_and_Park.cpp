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
ll m, n, q;

vll cat(MAX);
vi g[MAX];
vi visited(MAX);
int ans = 0;
void dfs(int a)
{
    visited[a] = 1;


    if (g[a].size() == 1 and a!=1)
    {
        ans++;
    }

    for (auto &el : g[a])
    {
        if (visited[el] || cat[a] + cat[el] > m)
            continue;
        if( cat[el])cat[el]+=cat[a];

        dfs(el);
    }
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
        FOR(i, 0, n)
        {
            cin>>q;
            cat[i+1]+=q;
        }
        FOR(i, 0, n - 1)
        {
            int a, b;
            cin >> a >> b;
            g[a].PB(b);
            g[b].PB(a);
        }

        dfs(1);
        cout<<ans;
    }
    return 0;
}