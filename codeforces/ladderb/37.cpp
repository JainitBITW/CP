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
        int count = 0;
        cin >> n >> m;
        vector<int> v(m + 1);
        FOR(i, 0, n)
        {
            cin >> q;
            v[q]++;
        }
        while (1)
        {
            if( v[m]== n )break;
            FOK(i, 0, m - 1)
            {
                if (v[i] == 0)
                    continue;

                v[i]--;
                v[i + 1]++;
            }
            count++;
        }
        cout<<count;
    }
    return 0;
}