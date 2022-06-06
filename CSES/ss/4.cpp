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
    // cin >> t;
    while (t--)
    {
        cin >> n >> m;
        multiset<int> s;

        FOR(i, 0, n)
        {

            cin >> q;
            s.insert(q);
        }

        int j = 0;

        for (int i = 0; i < m; i++)
        {
            cin >> q;
           auto it = s.upper_bound(q);

           if( it== s.begin())
           {
               cout<<-1; 
               nl;

           }
           else 
           {
               cout<<*(--it);
               nl;
               s.erase(it);
           }
        }
    }
    return 0;
}