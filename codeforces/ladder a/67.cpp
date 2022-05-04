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

int main()
{
    JALDI jaldi

            cin >>
        n;
    char a, b;
    char sum[n][n];

    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            cin >> c;

            if (i == 0 && j == 0)
            {
                a = c;
            }
            if (i == 0 && j == 1)
            {
                if ( a==c)
                {
                    cout << "NO";
                    return 0;
                }
                
                b = c;
            }
            if ((i == j)||(i+j==(n-1)))
            {
                if (c == a)
                {
                    continue;
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                if (c == b)
                {
                    continue;
                }
                else
                {

                    cout << "NO";
                    return 0;
                }

            }
        }
    }
    
    cout<<"YES";

    return 0;
}