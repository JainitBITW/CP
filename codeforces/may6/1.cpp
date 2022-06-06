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
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a = 0;
        int b = 0;
        int c = 0;
        int d = 0;
        int e = 0;
        cin >> m;
        if (m < 0)
            b++;
        FOR(i, 0, n)
        {
            cin >> q;
            if (q < 0)
                b++;
            if (q == m)
                c++;

            if (abs(q) < abs(m))
            {
                a++;
            }
            else
            {
                e = i;
                for (; i < n; i++)
                {
                    
                    if (abs(q) < abs(m))
                    {
                        cout << "NO";
                        d = 1;
                    }
                    m=q;
                    cin>>q;
                    
                }
            }
            m=q;
        }
        if (b <= e + c and b >= e and !d)
        {
            cout << "YES";
            nl;
            continue;
        }

        else
        {
            cout << "NO";
            nl;
            continue;
        }
    }
    return 0;
}