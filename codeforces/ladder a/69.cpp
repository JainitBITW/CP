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
char c;
typedef long long ll;
int m, n, q;
int mat[110][110];

int main()
{
    JALDI jaldi

            cin >>
        n;

    FOR(i, 1, n + 1)
    {
        FOR(j, 1, n + 1)
        {
            cin >> c;
            if (c == 'x')
            {
                mat[i][j] = 0;
            }
            else 
            {
                mat[i][j] = 1;
            }
        }
    }

FOR(i, 1, n + 1)
    {
        FOR(j, 1, n + 1)
        {
            cin >> c;
            if ((mat[i][j-1]+mat[i-1][j]+mat[i+1][j]+mat[i][j+1])%2==0)
            {
continue;            }
            else 
            {
               cout<<"NO";
               return 0 ;
            }
        }
    }

    cout<<"YES";


    return 0;
}