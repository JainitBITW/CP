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

        string s[5] = {"S", "M", "L", "XL", "XXL"};
    int num[5];
    FOR(i, 0, 5)
        cin >> num[i];
    cin >> n;
    string t;
    int j;
    FOR(i, 0, n)
    {
        cin >> t;
        for (j = 0; j < 5; j++)
            if (s[j] == t)
                break;

        FOR(k, 0, 5)
        {
            if (j + k < 5 and num[j + k])
            {
                cout << s[j + k];
                nl;
                num[j + k]--;
                break;
            }
            else if (j - k >= 0 and num[j - k])
            {
                cout << s[j - k];
                nl;
                num[j - k]--;
                break;
            }
        }
    }
    

    return 0;
}