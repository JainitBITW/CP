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
        map<int, int> lang;
        FOR(i, 0, n)
        {
            cin >> m;
            lang[m]++;
        }

        cin >> n;
        int j = 0;
        int maxa = -1;
        int a, b;
        int maxs = -1;
        vpi mov(n);
        FOR(i, 0, n)
        {
            cin >> mov[i].F;
        }
        FOR(i, 0, n)
        {
            cin >> mov[i].S;
        }
        FOR(i, 0, n)
        {
            if (lang[mov[i].F] >= maxa)
            {
                if (lang[mov[i].F] > maxa || lang[mov[i].S] > maxs)
                {
                    j = i + 1;
                    maxa = lang[mov[i].F];
                    maxs = lang[mov[i].S];
                }
            }
        }
        cout<<j;
        nl;
    }
    return 0;
}