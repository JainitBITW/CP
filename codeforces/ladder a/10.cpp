#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
typedef long long ll;

int main()
{
    JALDI jaldi int n;

    cin >> n;
    if (n % 2 == 1)
    {
        cout << -1;
        return 0;
    }
    n = n / 2;
    int i = 2;
    while (n != 0)
    {
        cout << i << " ";
        i -= 1;
        cout << i << " ";
        i += 3;

        n--;
    }

    

    return 0;
}