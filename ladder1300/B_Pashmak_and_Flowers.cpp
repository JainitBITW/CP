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
        cin >> n;
        vi v(n);
        vpi w;
        map<int, int> mp;
        FOR(i, 0, n)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        ll ans = 0;

        for (auto &e : mp)
            w.PB({e.F, e.S});

        if ((n=w.size()) == 1)
        {
          
            cout << 0 << " ";
            cout <<( w[0].S )*1LL * (w[0].S - 1)/2;
            nl; 
            continue;
        }
        else
        {cout << w[n-1].F-w[0].F<< " ";
            cout << 1LL*w[0].S * (w[n-1].S);
            nl; 
            
        }

        nl;
    }
    return 0;
}