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

            cin >>
        n >> m;

    int cur = 1;
    int wa = 0;
    int a, b;

    FOR(i, 0, n)
    {
        cin >> a >> b;

        wa += (b - a + 1);
        wa += (a - cur) % m;
        cur = b + 1;
    }
    cout << wa;


    return 0;
}