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
#define MAX 1000000007
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
vll v(1100, 0);
vll pre(1100, 0);
vll fac(1100, 0);
ll power(ll x, ll y)
{
    ll res = 1;

    x = x % MAX;

    while (y > 0)
    {

        if (y & 1)
            res = (res * x) % MAX;

        y = y >> 1; // y = y/2
        x = (x * x) % MAX;
    }
    return res;
}
ll modInverse(ll a)
{
    return power(a, MAX - 2) % MAX;
}
ll ncr(ll a, ll b)
{
    return (((fac[a] * modInverse(fac[b]) % MAX) * ((modInverse(fac[a - b])) % MAX)) % MAX);
}
ll f(ll i, ll j)
{

    return (ncr(i + j - 1, j)) % MAX;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        fac[0] = 1;
    FOR(i, 1, 1100)
    {
        fac[i] = (fac[i - 1] * i) % MAX;
    }

    int t = 1;
    //   cin>>t;
    while (t--)
    {

        cin >> n >> m;

        pre[0] = v[0];
        FOR(i, 1, n)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        cout << f(n, 2 * m);
    }
    return 0;
}