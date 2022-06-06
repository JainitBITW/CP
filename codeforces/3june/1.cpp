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
void solve()
{
    cin >> n;
    FOR(i, 0, 31)
    {
        if ((1 << i) & (n))
        {
            if (n & 1)
            {
                if (n == 1)
                {
                    cout << 3;
                    return;
                }
                else
                {
                    cout << (1 << i);
                    return;
                }
                
            }
            else
                {
                    if( n & (n-1 ))
                    {
                        cout << ((1 << i));
                    return;

                    }
                    else
                    {
                        cout << ((1 << i) +1);
                    return;
                    }
                    
                }
        }
    }
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
        solve();
        nl;
    }
    return 0;
}