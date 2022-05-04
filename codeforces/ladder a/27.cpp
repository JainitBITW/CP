#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;
int m, n, a, b, p, q;

int main()
{
    JALDI jaldi

            cin >>
        n >> m;
    bool now = true;
    b = m - 1;
    FOR(i, 0, n)
    {
        now = true;
        FOR(j, 0, m)
        {
            if (i % 2 == 0)
            {
                cout << '#';
            }
            else if (i % 2 == 1 && j == b&&now)
            {
                cout << '#';
                a = b;
                if (a == m - 1){
                    b = 0;
                    now= false;
                }

                if (a == 0)
                {
                    b = m - 1;
                    now = false;
                }
            }
            else
                cout << '.';
        }
        cout << endl;
    }
    return 0;
}