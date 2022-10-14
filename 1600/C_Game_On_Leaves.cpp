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
ll m, n;

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
        cin >> m;

        vll gr[n + 10];

        FOR(i, 0, n - 1)
        {
            int a, b;
            cin >> a >> b;
            gr[a].PB(b);
            gr[b].PB(a);
        }
        if (gr[m].size() <= 1)
        {
            cout << "Ayush";
            nl;
            continue;
        }
        else if ((n - 1) % 2 == 1)
        {
            cout << "Ayush";
        }
        else
        {
            cout << "Ashish";
        }
        nl;
    }
    return 0;
}