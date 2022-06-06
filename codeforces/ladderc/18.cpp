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
        vi v(n);
        vi ans;
        ll sum = 0;
        ll max = -1;
        ll max_in = 0;
        FOR(i, 0, n)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] > max)
            {
                max = v[i];
                max_in = i;
            }
        }

        FOR(i, 0, n)
        {
            if ((i != max_in) and (v[max_in] == sum - v[i] - v[max_in]))
            {
                ans.PB(i);
            }
        }
        sum -= v[max_in];

        v.erase(v.begin() + max_in);
      
        
        sort(ALL(v));  

        if(v[n-2]== sum-v[n-2])
        {
            ans.PB(max_in);

        }

        cout << ans.size();
        nl;
        for (auto &e : ans)
        {
            cout << e + 1 << " ";
        }
    }
    return 0;
}