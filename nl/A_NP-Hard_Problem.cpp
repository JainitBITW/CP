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
#define MAX 111111
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
vi g[MAX];
vi color(MAX, 0);
int bfs(int a)
{
    queue<int> q;
    q.push(a);
    color[a] = 1;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        int curr_color = color[par];
        int currr_color;
        if (curr_color == 1)
            currr_color = 2;
        else
            currr_color = 1;

        for (auto &el : g[par])
        {
            if (el == par)
                continue;
            if (color[el] == curr_color)
            {
                return -1;
            }
            else
            {
                if( color[el])continue;

                color[el] = currr_color;
                q.push(el);
            }
        }
    }
    return 0;
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

        FOR(i, 0, m)
        {
            int a, b;
            cin >> a >> b;

            g[a].PB(b);
            g[b].PB(a);
        }

        FOR(i, 1, n + 1)
        if( color[i]==0)
        if (bfs(i) == -1)
        {
            cout << -1;
            return 0;
        }

        vi v, w;
        FOR(i, 1, n + 1)
        {
            if (color[i] == 1)
                v.PB(i);
            else
                w.PB(i);
        }
        cout << v.size();
        nl;
        for (auto &el : v)
        {
            cout << el << " ";
        }
        nl;
        cout << w.size();
        nl;
        for (auto &el : w)
        {
            cout << el << " ";
        }
        nl;
    }

    return 0;
}