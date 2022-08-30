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
    //   cin>>t;
    while (t--)
    {
        cin >> n;
        vi v(n);
        int check = 0;
        int f = 0;

        FOR(i, 0, n)

        {
            cin >> v[i];
            check = __gcd(check, v[i]);
            if (v[i] == 1)
                f++;
        }

        if (check > 1)
        {
            cout << -1;
            return 0;
        }
        if (f)
        {
            cout << n - f;
            nl;
            return 0;
        }
        int ans = INT_MAX;
        FOR(i, 0, n)
        {
            int ck = 0;
            FOR(j, i, n)
            {
                ck = __gcd( v[j], ck );
                if (ck == 1)
                {
                    ans = min(j - i , ans);
                    break;
                }
            }
        }

        cout << n - 1 + ans;
        nl;
    }
    return 0;
}