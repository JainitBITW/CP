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
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        string s;
        getline(cin, s);

        n = s.size();
        for (int i = 0; i < n; i++)
        {
            while (s[i] == ' ')
            {
                i++;
            }

            if (i < n)
            {
                cout << "<";
                if (s[i] == '\"')
                {
                    i++;
                    while (s[i] != '\"')
                    {
                        cout << s[i++];
                    }
                    i++;
                }
                else
                {
                    while (i < n && s[i] != ' ')
                    {
                        cout << s[i++];
                    }
                }
                cout << ">";
                nl;
            }
        }
    }

    return 0;
}