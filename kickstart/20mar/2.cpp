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
    FOR(i, 1, t + 1)
    {
        cout << "Case #" << i << ": ";
        int wow = 1;
        string s;
        cin >> s;
        ll sum = 0;
        int a = s.size();
        FOR(i, 0, a)
        {
            sum += (s[i] - '0');
        }
        if (sum % 9 == 0)
        {
            FOR(i, 0, a)
            {
              
                cout << s[i];
                  if (i == 0)
                {
                    cout << '0';
                }
            }
            nl;
            continue;
        }
        c = 9 - (sum % 9) + '0';

        FOR(i, 0, a)
        {
            if (wow and s[i] > c)
            {
                wow = 0;
                cout << c;
            }
            cout << s[i];
        }
        if (wow)
        {
            cout << c;
        }
        nl;
    }
    return 0;
}