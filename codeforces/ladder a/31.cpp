#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
#define nl cout << endl
typedef long long ll;
ll m, n, a, b, p, q;

int main()
{
    JALDI jaldi
            cin >>
        q;
    while (q--)
    {b = 0 ;
    

        cin >> n;
       FOR(i, 0 , n)
        {
            cin >> a;
            b += a;
        }
  
         cout<<(b+n-1)/n ;

       
        nl;
    }

    return 0;
}