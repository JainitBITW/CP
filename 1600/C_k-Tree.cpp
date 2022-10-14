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
const ll MOD= 1000000007;
ll m, n, q;
vll ans1(111, -1);
vll ans2(111, -1);
ll fi(ll a)
{
    if (a < 0)
    {
        return 0;
    }
    if (a == 0)
    {
        return 1;
    }
    if (ans1[a] != -1)
    {
        return ans1[a];
    }
    ll ansa = 0;

    FOR(i, 1, m + 1)
    {
        ansa += fi(a - i);
        ansa %= (1000000007);
    }
    return ans1[a] = ansa;
}
ll fin(ll a)
{
    if (a < 0)
    {
        return 0;
    }
    if (a == 0)
    {
        return 1;
    }
    if (ans2[a] != -1)
    {
        return ans2[a];
    }
    ll ans = 0;
    FOR(i, 1, q)
    {
        ans += fin(a - i);
        ans %= (1000000007);
    }
    return ans2[a] = ans;
}
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

        fi(n);
        fin(n);

        cout <<( ans1[n] - ans2[n] +1000000007 )%(1000000007);
        nl;
    }
    return 0;
}