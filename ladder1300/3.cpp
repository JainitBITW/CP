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
ll gcd(ll a, ll b)
{

    if (a == 0)
        return b;
    return gcd(b % a, a);
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
        cin >> n;
        vi v(n);
        FOR(i, 0, n)
            cin >> v[i];

        // ll lcm = v[0];
        // FOR(i, 0, n)
        // {
        //     lcm = (ll)(lcm * v[i]) / gcd(lcm, v[i]);
        // }
        // // cout<<lcm;
        FOR(i, 0, n)
        {
            ll x = v[i];
            while (!(x % 3))
            {
                x /= 3;
            }
            while (!(x % 2))
            {
                x /= 2;
            }
            if( i==0 )v[0]=x;
            if (x != v[0])
            {
                cout << "NO";
                return 0 ;
            }
        }
        cout << "YES";
    }
    return 0;
}