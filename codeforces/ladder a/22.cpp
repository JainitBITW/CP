#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;
int m, n, o, a, b, p, q;

int main()
{
    JALDI jaldi

            cin >>
        a >> b;
    FOR(i, 1, 7)
    {
        if (abs(a - i) < abs(b - i))
            m++;
        if (abs(a - i) > abs(b - i))
            n++;
        if (abs(a - i) == abs(b - i))
            o++;
    }
    cout<<m << " "<<o <<' '<<n;

    return 0;
}