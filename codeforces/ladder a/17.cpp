#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;
const int N = 2 * 1e6 + 10;
int wow[N];

int main()
{
    JALDI jaldi

        int n,
        m;
    int c1 = 0, c2 = 0;
    cin >> n >> m;
    FOR(i, 1, n + 1)
    {
        int a;

        cin >> a;
        if (a == 1)
            c1++;
        else
            c2++;
    }
    while (m--)
    {

        int k, l;
        cin >> k >> l;
        if (k == l || (l - k+1) % 2 == 1)
        {
            cout << 0;
              cout << endl;
            continue;
        }
        else
        {
            if ((c1 >= (l - k+1) / 2) && (c2 >=(l - k+1) / 2))
                cout << 1;

            else
                cout << 0;
        }

        cout << endl;
    }

    return 0;
}