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
    cin >> s;
    for (int i = s.size() - 3; i >= 0; i--)
        if (s.substr(i, 3) == "WUB")
        {
            s.erase(s.begin() + i, s.begin() + i + 3);
            if (s[i] == ' ')
            {
                continue;
            }
            else
                s.insert(s.begin() + i, ' ');
        }

    cout << s;

    return 0;
}