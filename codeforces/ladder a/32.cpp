#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
#define nl cout << endl
char c;
typedef long long ll;
int m, n, a, b, p, q;

int main()
{
    JALDI jaldi
        string s;
    getline(cin, s);

    FOR(i, 0, s.size())
    {
        c = s[i];
        if (c == 'H' || c == 'Q' || c == '9')
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}