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

    string s;
    vi single(26, 0);
    vi hsh(26, 0);
    FOR(i, 0, 2*n +1)
    {  cin >> s;
        FOR(j, 0, s.size())
        {
            hsh[s[j] - 'a']++;
        }
      
        if (s.size() == 1)
        {
            single[s[0] - 'a']++;
        }
        
    }

    FOR(i, 0, 26)
    {
        if (single[i])
        {
            if (hsh[i] % 2)
            {
                cout << char(i + 'a');
                return;
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