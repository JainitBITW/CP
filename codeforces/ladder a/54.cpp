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

ll ff( ll a )
{
    ll b=0;
    ll ten= 1;

while ( a>0){
    if ( (a%10) != 0 )
    {
        b+= (a%10)*ten;
        ten*=10;

    }
    a/=10;
}
return b;
    

}


int main()
{
    JALDI jaldi
    ll w,a,b;

    cin >> a >> b;

    w = a+b;

cout<<( (ff(a)+ff(b)==ff(w))? "YES":"NO");





    return 0;
}