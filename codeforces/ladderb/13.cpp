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
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
int m, n, q;

int main()
{
    JALDI jaldi

        int t = 1;
    while (t--)
    {
        string s;
        cin>>n;
        cin >> s;
        if (n % 3 == 1)
        {
            int j = 0;

            cout << s[0] << s[1] << "-" << s[2] << s[3];
            if (n != 4)
                cout << "-";

            FOR(i, 4, n)
            {
                if (j == 3 and i != (n - 1))
                {
                    cout << "-";
                    j = 0;
                }
                cout << s[i];
                j++;
            }
            return 0;
        }

        int j = 0;
        FOR(i, 0, n)
        {
            if (j == 3 && i != (n - 1))
            {
                cout << "-";
                j = 0;
            }
            cout << s[i];
            j++;
        }
    }
    return 0;
}