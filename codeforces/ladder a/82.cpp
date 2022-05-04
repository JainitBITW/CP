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


 int array[9][9];
 FOR ( i ,1 ,9 )
 FOR ( j , 1, 9 )
 array[i][j]= ( i+j)%2;


        int r1,
        c1, c2, r2;
    cin >> r1 >> c1 >> r2 >> c2;
    int r = 0, k = 0, b = 0;

    if ((r1 == r2 || c1 == c2))
    {
        r = 1;
    }
    else
    {
        r = 2;
    }
    if ( array[r1][c1]== array[r2][c2])
    {
        if ( abs( r1-r2)==abs (c1-c2))
        b= 1 ;

        else b =2;
    }
    else b=0 ;


    k= max( abs ( r1-r2 ), abs ( c2-c1));

    cout << r<<" "<<b<<" "<<k;



    return 0;
}