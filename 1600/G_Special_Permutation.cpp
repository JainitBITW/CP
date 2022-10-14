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
ll m, n, q;

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
        if (n <= 3)
        {
            cout << -1;
            nl;
            continue;
        }
        vll v(n);
        int h = 1;
        FOR(i, 0, (n + 1) / 2)
        {
            v[i] = h;
            h += 2;
        }
        if (n & 1)
            h = n - 1;
        else
            h = n;
        FOR(i, (n + 1) / 2, n)
        {
            v[i] = h;
            h -= 2;
        }
        if (n & 1)
            swap(v[(n + 1) / 2], v[(n + 1) / 2 + 1]);
        else
        {
            swap(v[(n + 1) / 2 - 1], v[(n + 1) / 2 - 2]);
        }

        for (auto &e : v)
        {
            cout << e << " ";
        }
        nl;
    }
    return 0;
}