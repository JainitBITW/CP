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
unsigned int m, n, q;

int main()
{
    JALDI jaldi

            cin >>
        n >> m;
  q=n;

    int i = 0;
    while (q < m)
    {

        q*= n;
        i++;
    }

    if (q == m)
    {
        cout << "YES";
        nl;
        cout << i ;
    }

    else
        cout << "NO";

    return 0;
}