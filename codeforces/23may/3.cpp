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
    vi v(n);
    vi w(n);
    FOR(i, 0, n)
    cin >> v[i];

    FOR(i, 0, n)
    cin >> w[i];
    int c1 = 0;
    int c2 = 0;


    vpi ans;
    int x, y;
    for (x = 0; x < n - 1; x++)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[j] < v[i])
                {
                    swap(v[j],v[i]);
                    swap(w[j],w[i]);
                    ans.PB({j+1, i+1});
                }
            }
            
        }

          for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (w[j] < w[i])
                {
                    swap(v[j],v[i]);
                    swap(w[j],w[i]);
                    ans.PB({j+1, i+1});
                }
            }
            
        }
       if( !(is_sorted(ALL(v)) and is_sorted(ALL(w))))
       {
           cout<<-1;
           nl;
           return ;
           
       }
        cout << (ans.size()) << "\n";
        for (auto &ele : ans)
        {
            cout << ele.F << " " << ele.S << '\n';
        }
        return;
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
    }
    return 0;
}