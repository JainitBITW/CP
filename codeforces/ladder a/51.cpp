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
        n;
    int a = 0, b = n;
    int c;
    string s;
    while (n--)
    {
        cin >> s;

        if (s[0] >= 'A' && s[0] <= 'Z')
        {
            if (s == "ABSINTH" || s == "BEER" || s == "BRANDY" || s == "CHAMPAGNE" || s == "GIN" || s == "RUM" || s == "SAKE" || s == "TEQUILA" || s == "VODKA" || s == "WHISKEY" || s == "WINE")
            {
                a++;
            }
        }
        else
        {
            c = stoi(s);

            if (c < 18)
                a++;
        }
    }
    cout <<  a;

    return 0;
}