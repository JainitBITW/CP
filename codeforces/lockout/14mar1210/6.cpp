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
    // cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int si= s.size();
        string t1 = {""}, t2 = {""};
        FOR(i, 0,si)
        {
            if (s[i] == 'a')
            {
                t1.PB(s[i]);
            }
            else
            {
                t2.PB(s[i]);
            }
        }

      
        if (t1.size() == s.size())
        {
        
            cout << s;
            nl;
            return 0;
        }

        int z = t2.size();
        if (z & 1)
        {
            cout << ":(";
            return 0;
        }
        FOR(i, 0, z / 2)
        {
            if (t2[i] != t2[(z / 2) + i])
            {
                cout << ":(";
                return 0;
            }
        }

        FOR ( i , 0 , z/2)
        {
            if (s[si- z/2 +i  ]!= t2[i] )
            {
                 cout << ":(";
                return 0;

            }
        }
    FOR( i , 0 , si- z/2)cout<<s[i];
    nl;
    }
    return 0;
}