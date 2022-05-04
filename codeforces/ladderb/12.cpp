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
int m, n, q;

int main()
{
    JALDI jaldi

        int t = 1;
    while (t--)
    {
        string s, p;

        cin >> m >> n;
        vector<pair<string, string>> v(n);

        FOR(i, 0, n)
        {
            cin >> s >> p;
            v[i].F = s;
            if (SZ(s) > SZ(p))
                v[i].S = p;
            else
                v[i].S = s;
        }

        FOR(i, 0, m)
        {
            cin >> s;

            FOR(j , 0, n)
            {
                if (v[j].F == s)
                {
                    cout << v[j].S << " ";
                    break;
                }
            }
        }
        nl;
    }
    return 0;
}