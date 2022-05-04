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
        ll m;
    cin >> m;
    ll ct = 0;

        bool wow = false;
    for (ll i = m+1; i < 1000000009; i++)
    {
        if ( wow )break ;
        ll z = i;
        if (i < 0)
            z = -z;
        while (z > 0)
        {
            if (z % 10 == 8)
            {wow = true ;
                break;
            }
            z /= 10;
        }
        ct++;
    }

    cout <<ct;

        return 0;
}