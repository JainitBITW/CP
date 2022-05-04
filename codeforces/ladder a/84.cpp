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
    JALDI jaldi ll l, r;
    cin >> l >> r;
    for (ll i = l; i <= r; i++)
    {
        for (ll j = i; j <= r; j++)
        {
            if ((__gcd(i, j) != 1  )||( i==j))
                continue;

            for (ll k = j; k <= r; k++)
            {
                if ((__gcd(j, k) == 1) && (__gcd(i, k) != 1)&& (k!=i))
                {
                    cout << i << " " << j << " " << k;
                    return 0;
                }
            }
        }
    }
    cout<<-1;

    return 0;
}