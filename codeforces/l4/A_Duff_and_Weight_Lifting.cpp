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

int hsh[1111111];

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        q = 0;
        cin >> n;
        // unordered_map<int,int> mp;
        FOR(i, 0, n)
        {
            cin >> m;
            hsh[m]++;
        }
        FOR(j, 0, 1111111)
        {
            for (int i = 1; i < 32; i++)
            {
                if (1 << i & hsh[j])
                {
                    hsh[i + j]++;
                    hsh[j] -= (1 << i);
                }
            }
        }
        FOR(i, 0, 1111111)
        {
            if (hsh[i] > 0)
            {
                q++;
            }
        }
        cout << q;
        nl;
    }
    return 0;
}