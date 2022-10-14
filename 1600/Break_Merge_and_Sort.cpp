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

        vi v(n);

        ll ans = 0;

        priority_queue<ll, vector<ll>, greater<ll>> mp;

        FOR(i, 0, n)
        {
            cin >> m;
            ll you = 1;
            vll a;
            vll in(m);
            FOR(j, 0, m)
            {
                cin >> in[j];
            }
            ll last = in[0];

            FOR(x, 1, m)
            {
                if (in[x] >= last)
                {
                    you++;
                }
                else
                {

                    a.PB(you);
                    you = 1;
                }
                last = in[x];
            }

            a.PB(you);
            you = 1;

            sort(ALL(a));

            ll u = a.size() - 1;

            FOR(j, 0, u)
            {

                ans += a[j];
            }
            u++;
            FOR(k, 0, u)
            {
               
                mp.push(a[k]);
            }
        }
        while (mp.size() > 1)
        {
            ll a1 = mp.top();
            mp.pop();
            ll a2 = mp.top();
            mp.pop();

            ans += (a1 + a2);
            mp.push(a1 + a2);
        }
        cout << ans;
        nl;
    
    }
    return 0;
}