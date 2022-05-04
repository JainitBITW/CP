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
vector<pair<string, int>> database;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {

        cin >> n;
        string s;
        FOR(j, 0, n)
        {
            int flag = 0;
            cin >> s;
            int i = 0;
            for (i = 0; i < database.size(); i++)
            {
                if (s == database[i].first)
                {
                    flag = 1;
                    break;
                }
            }

            if (!flag)
            {
                database.PB({s, 1});
                cout << "OK";
                nl;
            }
            else
            {

                cout << database[i].F<< database[i].S;
                database[i].S++;
                nl;
            }
        }
    }
    return 0;
}