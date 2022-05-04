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

bool check(ll x)
{
    ll a = 0, b = 1;
    while (x > 0)
    {
        int z = x % 10;
        b *= z;
        a += z;
        x/=10;
    }
    if (b % a == 0)
        return true;
    return false;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    FOR(j, 1, t + 1)
    {
        cout << "Case #" << j << ": ";
        ll a, b;
        cin >> a >> b;
        ll ct = 0;


        for (ll i = a; i <= b; i++)
        {
            if (check(i))
                ct++;
        }

        cout << ct;
        nl;
    }
    cout<<4;
    return 0;
}