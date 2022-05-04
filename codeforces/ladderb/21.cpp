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
int m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    while (t--)
    {

        cin >> n >> m;
        string a[10000];
        FOR(i, 1, n+1)
            cin >> a[i];

        int ans = 0;

        FOR(i, 1, n+1)
        FOR(j, 0, m+1)
        if ( a[i][j]=='W')
        if( a[i][j-1]=='P'|| a[i][j+1]=='P'|| a[i+1][j]=='P'|| a[i-1][j]=='P')ans++;

        cout<<ans;
    }
    return 0;
}