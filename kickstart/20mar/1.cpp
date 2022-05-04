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
    for (int i = 1; i <= t; i++)
    {
        string s, t, tmp = {""};

        cin >> s >> t;
        int a = s.size(), b = t.size();
        if (a == b and t != s)
        {
            cout << "Case #" << i << ": "
                 << "IMPOSSIBLE";
            nl;
            continue;
        }
        for (int j = 0, k = 0; j < a and k < b;)
        {
            if (s[j] == t[k])
            {
                tmp.PB(s[j]);
                j++;
                k++;
            }
            else
            {
                k++;
            }
        }
        // tmp.PB('\0');
      
        if( tmp!= s)
        {
             cout << "Case #" << i << ": "
                 << "IMPOSSIBLE";
            nl;
            continue;


        }
        else
        {
            cout<< "Case #" << i << ": "<<b-a;
            nl;
        }
    }
    return 0;
}