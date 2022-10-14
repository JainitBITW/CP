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
ll m, n, q, nodes;
ll visited[1100][1100];
vector<string> v(MAX);

void dfs(int a, int b)
{
    if (a < 0 || a > n - 1 || b < 0 || b >= m )
    {
        return;
    }
    if( v[a][b]=='#')return ;
    if (nodes <= q)
    {

        return;
    }
    if (visited[a][b])
        return;

    visited[a][b] = 1;
    // cout<<v[a][b];
    nodes--;
    dfs(a - 1, b);
    dfs(a, b - 1);
    dfs(a + 1, b);
    dfs(a, b + 1);
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
        cin >> n >> m >> q;
        FOR(i, 0, n)
        {
            cin >> v[i];
        }
        int f = 0, g;
        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                if (v[i][j] == '.')
                {
                    nodes++;
                    f = i;
                    g = j;
                }
            }
        }
        // cout << nodes;
        // nl;
        dfs(f, g);
        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                if (!visited[i][j] && v[i][j] != '#')
                {
                    cout << 'X';
                }
                else
                    cout << v[i][j];
            }
            nl;
        }
    }
    return 0;
}