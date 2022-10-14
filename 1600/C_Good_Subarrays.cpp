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
const ll MOD = 1000000007;
ll m, n, q;

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
        vll v(n);
        vll pre(n,0);
        string s;
        cin>>s;
        FOR( i , 0 , n)
        {
            v[i]=s[i]-'0';
        }
        pre[0]=v[0];

        FOR(i, 1, n)
        {
            pre[i] = pre[i - 1] + v[i];
        }
        
        FOR(i, 0, n)
        {
            pre[i] -= i;
            
        }
        // for(auto &l: pre)cout<< l<<" ";
        // nl;
        map<ll, ll> mp;
        FOR(i, 0, n)
        {
            mp[pre[i]]++;
        }
        ll ans = 0;
        for (auto &e : mp)
        {
            
            ans += (((e.S) * (e.S - 1)) / 2) ;
        }
        cout << ans+mp[1];
        nl;
    }
    return 0;
}