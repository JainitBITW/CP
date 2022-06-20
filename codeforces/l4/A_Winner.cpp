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
    //   cin>>t;
    while (t--)
    {
        cin >> n;
        unordered_map<string, int> mp;
        unordered_map<string, int> mp2;
        vector<pair<string, int>> v(n);
        vector<string> w;
        string now = "";
        string now2 = "";
        int maxi2 = INT_MIN;
        FOR(i, 0, n)
        {
            int maxi = INT_MIN;
            string s;
            cin >> s >> m;
            v[i].F = s;
            v[i].S = m;
            mp[s] += m;
        }

        for (auto &el : mp)
        {
            maxi2 = max(maxi2, el.S);
        }
          for (auto &el : mp)
        {
           if( el.S== maxi2)w.PB(el.F);
        }
        FOR(i, 0, n)
        {
            mp2[v[i].F] += v[i].S;
            if (mp2[v[i].F] >= maxi2 &&  count(ALL(w),v[i].F))
            {
                now = v[i].F;
                break;
            }
        }
        cout << now;
    }
    return 0;
}