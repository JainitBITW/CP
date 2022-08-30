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
pair<int,int> make( int a , int b)
{
    
    int x = a/(__gcd(a, b));
    int y = b/__gcd(a,b);
    return {x,y};
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
        vector<int> v(n), w(n);
        map<pair<int,int> , int> mp;
        FOR(i, 0, n)
        {
            cin >> v[i];
        }
        FOR(i, 0, n)
        {
            cin >> w[i];
        }
        q=0;
        int l=0;

        

        FOR(i, 0, n)
        {
            if (v[i] == 0 and w[i] == 0)
            {
                q++;
                continue;
            }
            if( w[i]==0)
            {
                l++;
                continue;
            }
            if( v[i]==0 and w[i]!=0)continue;
            mp[make(v[i],w[i])]++;
        }

        int ans = 0;
        for (auto &el : mp)
        {
            ans = max(el.S, ans);
            nl;
        }
        ans= max( ans,l);
        
        cout << ans +q;
    }
    return 0;
}