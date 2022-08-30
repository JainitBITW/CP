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
    cin >> t;
    while (t--)
    {

        cin >> n >> m >> q;

        if (m == 1)
        {
            if ((n - 1) % q==0)
            {
                cout << "Yes";
            }
            else
            {
                cout << "No";
            }
            nl;
            continue;
        }

        ll z = 1;
        int f = 0;
        while (n >= z)
        {
            if ((n - z) % q == 0)
            {
                f = 1;
                break;
                
            }
            z *= m;
        }

        cout << (f ? "Yes" : "No");
        nl;
    }
    return 0;
}