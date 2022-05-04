#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
typedef long long ll;

int main()
{
    JALDI jaldi int n, a;
    cin >> n >> a;
    int ans = 0;

    FOR(i, 0, n)
    {
        int j = 0;
        int k;
        cin >> k;
        while (k > 0)
        {
            if (k % 10 == 4 || k % 10 == 7)
            {
                j++;
            }
            k /= 10;
        }
        if (j <= a)
        {
            ans++;
        }
    }
    cout << ans;

    return 0;
}