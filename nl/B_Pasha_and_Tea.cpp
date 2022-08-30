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
double m, n, q;

double min(double a, double b)
{
    if (a > b)
        return b;
    return a;
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
        cin >> n >> m;
        vector<double> v(2 * n);
        FOR(i, 0, 2 * n)
        cin >> v[i];
        sort(ALL(v));

        double ans = (double)m;

        ans = min(ans, v[0] * 3 * n);

        ans = min(ans, ((v[n]) / 2) * 3 * n);

        cout
            << setprecision(18) << ans;
        nl;
    }
    return 0;
}