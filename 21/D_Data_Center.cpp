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

bool cmp(pair<pair<ll, ll>, ll> &a, pair<pair<ll, ll>, ll> &b)
{
    if (a.F.F == b.F.F)
        return a.F.S > b.F.S;

    return a.F.F > b.F.F;
}
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
        cin >> m;
        vector<pair<pair<ll, ll>, ll>> v(n);
        vi hsh(n);
        FOR(i, 0, n)
        {
            cin >> v[i].F.F >> v[i].F.S;
            v[i].S = i;
        }
        sort(ALL(v), cmp);

        ll re = 0;
        ll vol = 0;
        multiset<pair<ll, ll>> s;

        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (re >= m)
            {
                
                break;
            }
            else
            {
                
                hsh[v[i].S] = 1;
                re += v[i].F.F;
                if (v[i].F.S == 1)
                {
                    vol++;
                }
                else
                {
                    
                    s.insert({v[i].F.F, v[i].S});
                }
            }
        }

        // for (auto &el : v)
        // {
        //     cout << el.F.F << " " << el.F.S <<" "<<el.S;
        //     nl;
        // }
        FOR(j, i, n)
        {
            if (v[j].F.S == 0)
            {

                continue;
            }
            if ((!s.empty()) && (v[j].F.F + re - (*s.begin()).F) >= m)
            {
               

                re -= (*s.begin()).F;
                re += v[j].F.F;
                vol++;

                hsh[v[j].S] = 1;
                hsh[(*s.begin()).S] = 0;
                s.erase(s.begin());
            }
            else
                break;
        }

        vll ans;
        FOR(i, 0, n)
        {
            if (hsh[i])
            {
                ans.PB(i + 1);
            }
        }
        cout << ans.size() << " " << vol;
        nl;
        for (auto &e : ans)
        {
            cout << e << " ";
        }
    }
    return 0;
}