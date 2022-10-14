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
#define MOD (long long)1e9 + 7
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
ll max(ll a, ll b)
{
    if (a > b)
        return a;
    return b;
}
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
        string s;
        cin >> s;

        vll v(n);
        ll real = 0;

        FOR(i, 0, n)
        {
            ll a = 0;
            if (s[i] == 'L')
            {
                a = i;
            }
            else
            {
                a = n - 1 - i;
            }
            real += a;
            v[i] = max(n - 1 - i, i) - a;
        }
        sort(ALL(v), greater<ll>());

        for (auto &el : v)
        {
            real += el;
            cout << real << ' ';
        }
        nl;
    }
    return 0;
}