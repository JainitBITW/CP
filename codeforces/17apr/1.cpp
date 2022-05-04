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

        cin >> n >> m >> q;
        int cr = 0, cb = 0;
        int ans = (n) / (q + 1);
        
        while (cr < m)
        {
            cout << 'R';
            cr++;

            if (cr % ans == 0)
            {
                
                if(cb==q)continue;
                cout << 'B';
                cb++;
                
            }
        }
        m -= cr;
        cb = q - cb;
         while (m > 0)
        {
            cout << 'R';
            m--;
        }

        while (cb > 0)
        {
            cout << 'B';
            cb--;
        }
       

        nl;
    }
}