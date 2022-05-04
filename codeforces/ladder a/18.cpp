#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;
int row[100], col[100];

int main()
{
    JALDI jaldi

        int n,
        m;
    char a;
    cin >> n >> m;
int z= 0 , b= 0 ;

    FOR(i, 0, n)
    {
        FOR(j, 0, m)
        {
            cin >> a;
            if (a == 'S')
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    FOR (i , 0 , max(m,n))
    {
        if ( row[i]==1)
        {
            z++;

        }
        if (col[i]==1)
        {
            b++;

        }
    }
    cout<<(n*m)-(z*b);

    return 0;
}