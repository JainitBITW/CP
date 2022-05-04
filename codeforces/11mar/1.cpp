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
int m, n, q;

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
        int flag = 0;
        if (n % 3 == 1)
        {
            flag =0;
            cout << 1;
            n--;
        }
        else if (n % 3 == 2)
        {
            flag= 1;
            cout << 2;

            n--;
            n--;
        }

        while (n > 0)
        {
            if ( flag ){
            cout<<12;
            n-=3;
            }
            else
            {
                cout<<21;
                n-=3;
            }
        }
        nl;
    }

    return 0;
}