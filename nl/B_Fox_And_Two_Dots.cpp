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
vvi visited(100, vi(100, 0));
vector<string> grph(MAX);

bool flag = false;

void dfs(int i, int j, char par, int k, int l)
{
  
    if (flag)
        return;

    if (grph[i][j] != par)
        return;

    if (visited[i][j] and par == grph[i][j])
    {

        flag = true;
        return;
    }

    visited[i][j] = 1;

    if (i - 1 >= 0 && i-1 != k)
        dfs(i - 1, j, par, i, j);

    if (j - 1 >= 0 && j-1  != l)
        dfs(i, j - 1, par, i, j);

    if (j + 1 < m && j+1 != l)
        dfs(i, j + 1, par, i, j);

    if (i + 1 < n && i +1 != k)
        dfs(i + 1, j, par, i, j);
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
            cin >> grph[i];
           

            nl;
        }

        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                
                if (!visited[i][j])
                {
                    dfs(i,j , grph[i][j], -1, -1);
                }
            }
        }
        cout << (flag ? "Yes" : "No");
    }
    return 0;
}