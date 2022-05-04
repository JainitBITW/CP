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

bool cpmp(pair<pair<ll, ll>,ll> &a, pair<pair<ll, ll>,ll> &b)
{
    return a.F.S< b.F.S;
}
bool cmp( pair<ll,ll>&a, pair<ll,ll>&b){return a.F<b.F;}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> m;
        vector<pair <pair<ll, ll>, ll>> v(m);
        vector<pair<ll,ll>> po(2 * n);

        ll a, b;
        FOR(i, 0, m)
        {
            cin >> v[i].F.F;
            cin >> v[i].F.S;
            v[i].S = i+1;
        }
        ll ans = 0;
        sort(ALL(v), cpmp);
        FOR(i, 0, 2 * n)
        {
            ans += v[i].F.S;
            po[i].F = v[i].F.F;
            po[i].S = v[i].S;
        }
        cout<<ans;
        nl;
        sort( ALL(po),cmp);
       FOR( i , 0 , n)
       {
           cout<<po[i].S<<" "<<po[2*n -1-i].S;
           nl;
       }nl;

    }
    return 0;
}