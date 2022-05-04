#include <bits/stdc++.h>
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int m, n, a, b, rb, cb;
        int wco = 0, rw = 0, cw = 0, counter = 0;
        cin >> m >> n >> a >> b;

        char board[m][n];

        FOR(i, 0, m)
        {
            FOR(j, 0, n)
            {
                cin >> board[i][j];
                if (board[i][j] == 'W')
                {
                    wco++;
                }
                if (i == a - 1)
                {
                    if (board[i][j] == 'W')

                        rw++;
                }
                if (j == b - 1)
                {
                    if (board[i][j] == 'W')

                        cw++;
                }
            }
        }

        rb = m - rw;
        cb = n - cw;
        if (wco == m * n)
        {
            cout << -1 << endl;
            continue;
        }
        else if (rb == m && cb == n)
        {
            cout << 0 << endl;
            continue;
        }
        else if ((rb == m && cb != n) || (rb != m && cb == n))
        {
            cout << 1 << endl;
            continue;
        }

        else
        {
            if ((board[a - 1][b - 1] == 'W') &&rb > 0 &&cb == n - 1)
            {
                cout << 1 << endl;
            }
           else  if ((board[a - 1][b - 1] == 'W') &&cb > 0 &&rb == m - 1)
            {
                cout << 1 << endl;
            }
          
        }
    }

    return 0;
}