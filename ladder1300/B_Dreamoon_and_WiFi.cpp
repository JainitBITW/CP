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
ll ncr(int a, int b)
{
    ll x = 1;
    int i = 0;
    int y = b;
    // cout<<1;
    while (i < b)
    {
        x *= (a--);
        i++;
    }
    // cout<<x;nl;
    i = 0;
    while (i < b)
    {
        x /= y--;
        i++;
    }
    return x;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;///
    while (t--)
    {
        string s, t;
        cin >> s >> t;

        int a = count(ALL(s), '+') - count(ALL(t), '+');
        int b = count(ALL(s), '-') - count(ALL(t), '-');

        if (a < 0 || b < 0)
        {
           printf("%.12lf",(double)0);
            nl;
        }
        else
        {
            printf("%.12lf", (double)ncr(a + b, b) / (1 << a + b));
        }
    }
    return 0;
}