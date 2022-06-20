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
int m, n, q;



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
        string s, t;
        cin >> s >> t;
        string c = "";
        int count1 = 0;
        int count2 = 0;
        int i, j;
        sort(ALL(s));
        sort(ALL(t));
       
        for (i = 0, j = 0; i < n && j < m;)
        {
            if (s[i] < t[j])
            {
                if (count1 < q)
                {
                    cout << (s[i++]);
                    count1++, count2 = 0;
                }
                else
                {
                    cout << (t[j++]);

                    count1 = 0;
                    count2 = 1;
                }
            }
            else
            {
                dfs( v, 0  ) ;

            }
        }
        nl;
    }
    return 0;
}