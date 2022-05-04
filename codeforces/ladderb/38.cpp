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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        int ans = 0;

        cin >> n >> m;
        int s[m];
        int e[m];
        int t[m];
        int c[m];

        FOR(i, 0, m)
        cin >> s[i] >> e[i] >> t[i] >> c[i];

        FOR(i, 1, n + 1)
        {
            int max = 1110;
            int coins = 0;
            FOR(j, 0, m)
            {
                
                if (s[j] <= i and e[j] >= i)
                {
                  
                    if (t[j] < max)
                    {
                        max = t[j];
                        coins = c[j];
                    }
                }
            }
            ans+=coins;
        }
        cout<<ans;
    }

    return 0;
}