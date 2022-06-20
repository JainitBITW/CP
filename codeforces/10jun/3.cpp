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

int mini;
int mini2;
void dfs(vector<vector<int>> v, int i, int masd, int par)
{
    if (v[i].size() == 1)
    {
        mini = min(masd, mini);
        return;
    }
    if (v[i].size() == 2 && i != 0)
    {
        mini2 = min(masd +1, mini2);
       return;
    }

    for (auto ele : v[i])
    {
        if (ele == i || ele == par)
            continue;

        dfs(v, ele, masd+1 , i);
    }
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<vector<int>> v(n);
        FOR(i, 0, n - 1)
        {
            cin >> m >> q;
            --m;
            --q;
            v[q].PB(m),
                v[m].PB(q);
        }
        if (v[0].size() == 1)
        {
            cout << n - 2;
            nl;
            continue;
        }
        else
        {
            vi visited(n, 0);
            mini = INT_MAX;
            mini2 = INT_MAX;
            dfs(v, 0, 0, -1);
            if (mini2 < mini)
            {
                if( mini!= INT_MAX)
                cout <<max( n - (2 * mini2), n - 1 - (2 * mini));
                else
                {
                    cout<<n-(2*mini2);
                }
                nl;
                continue;
            }
            cout << n - 1 - (2 * mini);

            nl;
        }
    }
    return 0;
}