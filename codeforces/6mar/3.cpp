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
vpi v[100000];

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        unordered_set<int>
            s;

    int t = 1;
    // cin >> t;
    while (t--)
    {
        pair<int,int > p;

        ll ans = 0;
        cin >> n >> m;
        int z;

        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                if (i == n - 1 and j == m - 2)
                {
                    for (auto &ele : s)
                    {
                        int k = ele;
                        int size = v[ele].size();
                        if (size == 1)
                            continue;
                        FOR(i, 0, size)
                        {
                            FOR(j, i + 1, size)
                            {
                                ans += abs(v[k][i].F - v[k][j].F) + abs(v[k][i].S - v[k][j].S);
                            }
                        }
                    }
                }
                cin >> q;
                if ( i== n-1 and m-2 == j )z= q;
                s.insert(q - 1);
                
                v[q - 1].PB({i, j});
                if ( i== n-1 and j == m-2 )p = {i,j};

            }
        }
        
        int x = v[z-1].size();
        FOR(  i , 0 , x) 
        {
            ans+=  abs(v[z-1][i].F - p.F) + abs(v[z-1][i].S - p.S);

        } 

        
        cout << ans;
    }
    return 0;
}