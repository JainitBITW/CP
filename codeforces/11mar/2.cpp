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
// char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
int m, n, q;
int count(string s, char c)
{
    int res = 0;

    for (int i = 0; i < s.length(); i++)

        // checking character in string
        if (s[i] == c)
            res++;

    return res;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {

        int flag = 0;
        cin >> n >> m;
        string mat[n];
        FOR(i, 0, n)
        {
            cin >> mat[i];
            int temp = count(mat[i], '1');
            if (temp == 0)
            {
                flag++;
               

                nl;
                break;
            }
        }
        if (!flag)
        {
            FOR(i, 0, m)
            {
                int temp = 0;
                FOR(j, 0, n)
                {
                    if (mat[j][i] == '1')
                        temp++;
                }
                if (temp != 0 and temp != n)
                {
                    flag = 1;
                    cout << "NO";
                    nl;
                    break;
                }
                if (flag)
                    break;
            }
        }
        if (!flag)
        {
            cout << "YES";
            nl;
        }
    }
    return 0;
}