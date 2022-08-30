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
        string s, u;
        cin >> s >> u;
        vi v, w, x, z;
        vi same;
        FOR(i, 0, n)
        {
            if (s[i] == 'a' and s[i] != u[i])
            {
                v.PB(i+1);
            }

            if (s[i] == 'b' and s[i] != u[i])
            {
                x.PB(i+1);
            }
        }

        if (v.size() & 1)
        {
            x.PB(v[0]);
            same.PB(v[0]);
            v.erase(v.begin());
        }
        if (x.size() & 1)
        {
            v.PB(x[0]);
            same.PB(x[0]);
            x.erase(x.begin());
        }

        if (x.size() & 1 || v.size() & 1)
        {
            cout << -1;
            return 0;
        }

        cout << (v.size() + x.size())/2 + same.size();\
        nl;

        FOR( i , 0 , same.size())
        {
            cout<<same[i]<<" "<<same[i];
            nl;
        }

        FOR( i , 0, v.size()/2)
        {
            cout<<v[i]<<" "<<v[v.size()-1-i];
            nl;
        }
       FOR( i , 0, x.size()/2)
        {
            cout<<x[i]<<" "<<x[x.size()-1-i];
            nl;
        }

        nl;

        nl;
    }
    return 0;
}