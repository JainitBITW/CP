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
char c;
typedef long long ll;
int m, n, q;

int main()
{
    JALDI jaldi

        ll a,
        b;

    int ans = 1;
    int j = 1;
    int i = 1;

    cin >> n;
    cin >> a;

    while (i != n)
    {
        cin >> b;

        if (a > b)
        {

            j = 0;
        }
        a = b;
        i++;
        j++;

        ans = max(ans, j);
    }
    cout << ans;

    return 0;
}