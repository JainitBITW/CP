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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {

        cin >> n >> m;
        vi v(n);
        ll ans = 0;
        FOR(i, 0, n)
        {

            cin >> v[i];
            ans += v[i];
        }
        if( n==1)
        {
            ans+=m-1;
            cout<<ans;
            nl;
            continue;
        }

        if (m < n)
        {
            ll temp = 0;
            ll ans1 = INT_MIN;
            FOR(i, 0, m)
            {
                temp += v[i];
            }
            ans1 = max(ans1, temp);
            for (int i = 0, j = m; i < n && j < n; i++, j++)
            {
                temp += v[j];
                temp -= v[i];
                ans1 = max(ans1, temp);
            }
            cout << ans1 + (((m) * (m - 1)) / 2);
            nl;
            continue;
        }
        else
        {

            int k = (m - n) / (n - 1);

            ans += (k * ((n - 1) * (n))) +( n*(k-1));

             k = (m - n) % (n - 1) +1 ;

            ans += ( (((n-1) * (n)))-  (n-k+1) * ( n-k ));

            cout << ans;
            nl;
            continue;
        }
    }
    return 0;
}