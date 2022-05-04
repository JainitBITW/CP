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
        vi v(n);
        FOR(i, 0, n)
        cin >> v[i];
        bool wow = true;
        int ct0 = 0, ct1 = 0;
        vi ans = v;
        sort(ALL(ans));
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (ans[i] != v[i])
            {
                break;
            }
        }
        int j = 0;
        for (j = n - 1; j >= 0; j--)
        {
            if (ans[j] != v[j])
            {
                break;
            }
        }

              for (int k = i; k <j; k++)
        {
            if ((ans[k]+ans[k+1] )% 2==0)
                ct1++;
           
        }
        if (ct0 == ct1)
            cout<<("YES");
        else
            cout<<("NO");

            nl;
    }
    return 0;
}