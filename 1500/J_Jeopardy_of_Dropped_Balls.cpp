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

        int v[n][m];

        FOR(i, 0, n)
        FOR(j, 0, m)
            cin >> v[i][j];

        while (q--)
        {
            int a;
            cin >> a;
            a--;
            int ans = a;
            FOR(i, 0, n)
            {
                if (v[i][a] == 1)
                {
                    v[i][a] = 2;
                    a++;
                    i--;
                }
                else if (v[i][a] == 3)
                {
                    v[i][a] = 2;
                    a--;
                    i--;
                }
            }
            cout << a+1 << " ";
        }
    }
    return 0;
}