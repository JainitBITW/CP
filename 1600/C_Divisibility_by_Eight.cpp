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
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
#define MOD (long long)1e9 + 7
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
        cin >> s;
        n = s.size();
        FOR(i, 0, n)
        {
            int a = s[i] - '0';
            if (a % 8 == 0)
            {
                cout << "YES";
                nl;
                cout << a;
                return 0;
            }
            
            // cout<<a;
            // nl;
            FOR(j, i + 1, n)
            {

                int b = s[j] - '0';
              
                if (((a * 10) + b) % 8 == 0)
                {
                    cout << "YES";
                    nl;
                    cout << (a * 10) + b;

                    return 0;
                }

                FOR(k, j + 1, n)
                {
                    int c = s[k] - '0';
                    if (((a * 100) + (b * 10) + c) % 8 == 0)
                    {
                        cout << "YES";
                        nl;
                        cout << a * 100 + b * 10 + c;

                        return 0;
                    }
                }
            }
        }

        cout << "NO";
    }
    return 0;
}