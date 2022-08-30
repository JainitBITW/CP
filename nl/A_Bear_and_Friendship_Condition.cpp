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
ll a, b;

vi graph[MAX];
vi vis(MAX);
void dfs(int w)
{
    if (vis[w])
        return;
    vis[w] = 1;
    a++;

    b+=graph[w].size();

    for (auto &el : graph[w])
    {

        if( !vis[el])
        dfs(el);
    }
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n >> m;
        FOR(i, 0, m)
        {
            int x, y;
            cin >> x >> y;

            graph[x].PB(y);
            graph[y].PB(x);
        }
        FOR(i, 1, n + 1)
        {
            a = 0, b = 0;
            if (!vis[i])
            {
                dfs(i);
            }
            if (b != (a * (a - 1)))
            {
                cout << "NO";
                nl;
                return 0;
            }
        }
        cout << "YES";
        nl;
    }
    return 0;
}