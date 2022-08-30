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
        vi a(n), b(n);
        FOR(i, 0, n)
        cin >> a[i];
        FOR(i, 0, n)
        cin >> b[i];
        int minm = INT_MAX, maxm = INT_MIN;
        FOR(i, 0, n)
        {

            minm = min(a[i] % b[i], minm);
            maxm = max(a[i] % b[i], maxm);
        }
        int minb = *min_element(ALL(b));
        ll ans1 = 0;
        ll ans2 = 0;
        FOR(i, 0, n)
        {

            if (a[i] % b[i] != minm)
            {
                if (a[i] % b[i] < minm)
                {
                    ans1 += minm - (a[i] % b[i]);
                }
                else
                {
                    ans1 += (b[i] - (a[i] % b[i]) + minm);
                }
            }
        }
        if (maxm < minb)
        {
            FOR(i, 0, n)
            {
                if (a[i] % b[i] != maxm)
                {
                    if (a[i] % b[i] < maxm)
                    {
                        ans2+= maxm - (a[i] % b[i]);
                    }
                    else
                        ans2 += (b[i] - (a[i] % b[i]) + maxm);
                }
            }
        }
        else
            ans2 = LLONG_MAX;

        cout << (ans1 > ans2 ? ans2 : ans1);
        nl;
    }
    return 0;
}