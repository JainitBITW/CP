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

ll value(string s)
{
    ll ans = 0;
    FOR(i, 0, s.size())
    {
        ans += s[i] - 'a' + 1;
    }
    return ans;
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
        string s;
        cin >> s;
        n = s.size();

        if (!(s.size() % 2))
        {
            cout << "Alice"
                 << " " << value(s);
            nl;
        }
        else
        {
            ll ans = value(s);
            string a = "", b = "";
            a += s[n - 1];
            b += s[0];

            if (value(a) > ans - value(a) && value(b) > ans - value(b))
            {
                cout << "Bob"
                     << " " << min(2 * value(a) - ans, 2 * value(b) - ans);
                nl;
            }
            else{
                cout<<"Alice"<<" "<<max(ans- 2 * value(a), ans- 2 * value(b)); nl;

            }
        }
    }
    return 0;
}