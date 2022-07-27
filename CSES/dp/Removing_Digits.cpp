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

vll dp( MAX, LONG_LONG_MAX -1 );

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        FOR(i, 1, 10) dp[i] = 1;

    FOR(i, 10, 1000002)
    {
        ll z = i;
        while (z > 0)
        {

            dp[i] = min(dp[i], dp[i - (z % 10)] + 1);

            z /= 10;
        }
    }
    int t = 1;
    //   cin>>t;
    while (t--)
    {
        cin >> n;
        cout<<dp[n];
    }
    return 0;
}