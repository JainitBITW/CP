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
        int ans = 0;
        string s;
        int flag1 = 0;
        int flag2 = 0;

        cin >> s;
        FOR(i, 0, s.size())
        {
            int x = s[i] - '0';
            if (x % 2 == 0 )
            {
                flag1 += 1;
            }
            if (x == 0)
            {
                flag2 = 1;
            }

            ans += x;
        }
        if (flag1 >1 and flag2 and ans%3==0)
            cout << "red";
        else
            cout << "cyan";

        nl;
    }
    return 0;
}