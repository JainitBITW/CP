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

vector<vector<int>> graph(100005);
bool visited[100005];
int cost[100005];

int dfs(int i)
{
    int mini = cost[i];
    visited[i] = 1;
    for (auto child : graph[i])
    {
        if (visited[child])
            continue;

        mini = min(mini, dfs(child));
    }
    return mini;
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
        cin >> n;
        cin >> m;

        FOR(i, 0, n)
        {
            cin >> cost[i + 1];
        }
        int a, b;
        FOR(i, 0, m)
        {
            cin >> a >> b;
            graph[a].PB(b);
            graph[b].PB(a);
        }
ll ans =0;
        FOR(i, 1, n + 1)
        {
            int mini = INT_MAX;

            if (visited[i])
                continue;
            mini = min(mini, dfs(i));
            
            ans+=mini;
        }

        cout << ans;;
        nl;
    }
    return 0;
}