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
char a[110][110];

int main()
{
    JALDI jaldi

        int t = 1;
    // cin>>t;
    while (t--)
    {

        cin >> n >> m;
        FOR(i, 0, n)
        FOR(j, 0, m)
        cin >> a[i][j];

        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                if (a[i][j] == '-')
                {
                    cout << '-';
                    continue;
                }

                if ((i + j) & 1)
                {
                    cout << 'B';
                }
                else
                    cout << 'W';
            }
            nl;
        }
    }
    return 0;
}