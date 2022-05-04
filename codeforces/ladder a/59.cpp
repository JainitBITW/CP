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
bool luckynumber(int a)
{
    bool win = true;
    while (a > 0)
    {
        if ((a % 10 != 4) && (a % 10 != 7))
        {
            win = false;
            break;
        }
        a /= 10;
    }

    return win;
}

int main()
{
    JALDI jaldi bool win = false;
    cin >> n;
    FOR(i, 2, n + 1)
    {

        if ((n % i == 0) && (luckynumber(i)))
        {
            win = true;
            break;
        }
    }

    cout<<(win? "YES ":"NO");

    return 0;
}