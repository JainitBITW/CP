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
        vi v;
        map<int, int> mp;
        FOR(i, 0, n)
        {
            cin >> q;
            mp[q]++;
        }
        int ans = 0;
        for (auto &ele : mp)
        {
            v.PB(ele.F);
        }

        int num = v.size();

        FOR(i, 0, num)
        {
            int check = 0;
            for (int j = 1; j <= 32; j++)
            {
                ll temp = (1 << j) - v[i];
                if (temp > 0)
                {
                    if (temp == v[i] and mp[v[i]] > 1)
                    {
                    
                        check = 1;
                        break;
                    }
                    else if (mp[temp] and temp!= v[i])
                    {

                        check = 1;
                        break;
                    }
                }
            }
            
            if (!check)
            {
                ans += mp[v[i]];
            }
        }

        cout << ans;
    }
    return 0;
}