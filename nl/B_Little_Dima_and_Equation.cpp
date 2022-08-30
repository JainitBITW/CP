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
    // cin >> t;
    while (t--)
    {

        cin >> n >> m >> q;

        vll sum(100);
        vll ans;
        FOR(i, 1, 82)
        {
            ll po = 1;
            FOR(j, 0, n)
            {
                po *= i;
            }
            po *= m;
            po += q;

            if (po >= 1 && po <= 1e9)
            {
                ll po2 = po;
                ll i2 = 0;
                while (po2!= 0)
                {
                    i2 += (po2 % 10);
                    po2 /= 10;
                }
                if( i2==i)
                {
                    ans.PB (po);
                }
            }
        }

        if( ans.size())
        {
            sort(ALL(ans));

        }

        cout<<ans.size();
        nl;
        for(auto &el :ans)cout<<el<<" ";
    }
    return 0;
}