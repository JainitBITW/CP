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

ll solve(ll a, ll b, ll x, ll y , ll n)
{
     ll temp = a - x;
        temp = min(temp, n);
        a -= temp;
        n -= temp;

        temp = b - y;
        temp = min(temp, n);

        b -= temp;
        n -= temp;

        return a*b ; 
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi int t;
    cin >> t;

    while (t--)
    {
        ll a, b, n, y, x;
        cin >> a >> b >> x >> y >> n;

    cout<<min( solve(a,b, x, y, n), solve(b,a,y,x,n)); 
    nl;

         



    }

    return 0;
}