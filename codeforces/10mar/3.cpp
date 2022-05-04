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
        vi a(n);
        vi b(n);
        bool a1 = 0, a2 = 0;
        FOR(i, 0, n)
        cin >> a[i];
        FOR(i, 0, n)
        cin >> b[i];

        int maxi = INT_MAX;
        ll ans = 0;
        FOR(i, 0, n)
        {
            maxi = min(maxi, abs(a[0] - b[i]));
            if (maxi == 0)
                break;
        }
        ans += maxi;
        if (maxi == abs(a[0] - b[0]))
            a1 = 1;
        else if (maxi == abs(a[0] - b[n - 1]))
            a2 = 1;
        maxi = INT_MAX;
        FOR(i, 0, n)
        {
            maxi = min(maxi, abs(a[n - 1] - b[i]));
            if (maxi == 0)
                break;
        }
        ans += maxi;
        if (maxi == abs(a[n - 1] - b[n - 1]))
            a2 = 1;
        else if (maxi == abs(a[n - 1] - b[0]))
            a1 = 1;

        if (!a1)
        {
            maxi = INT_MAX;
            FOR(i, 0, n)
            {
                maxi = min(maxi, abs(a[i] - b[0]));
                if (maxi == 0)
                    break;
            }
            ans += maxi;
        }
        if (!a2)
        {
            maxi = INT_MAX;
            FOR(i, 0, n)
            {
                maxi = min(maxi, abs(a[i] - b[n-1]));
                if (maxi == 0)
                    break;
            }
            ans += maxi;
        }

        ll ans1 = min( abs ( a[0]- b[0])+ abs ( a[n-1]- b[n-1]), abs( a[0]- b[n-1])+ abs( a[n-1]- b[0]));
        cout<<min( ans , ans1);
        nl;
    }
    return 0;
}