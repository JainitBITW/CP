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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {
        cin >> n;
        ll a;
        vll v(n);
        FOR(i, 0, n)
        cin >> v[i];
        sort(ALL(v));
        int ans = 1;
        int count = 0;

        for (int i = 0, j = 0; i < n and j < n;)
        {

            if (v[j] - v[i] <= 5)
            {
                ans = max(ans, j - i+1);
                j++;
            }
            else
            {
                i++;
            }
        }
        cout << ans;
    }
    return 0;
}