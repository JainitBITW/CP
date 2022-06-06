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

        int arr[4];
        arr[0] = 0;
        arr[2] = 0;
        arr[1] = 0;
        arr[3] = 0;
        int maxi = INT_MAX;
        int f = 0;
        FOR(i, 0, n)
        {
            cin >> m;
            arr[m % 4]++;
            if (m & 1)
                f = 1;
            else
            {
                FOR(i, 0, 32)
                {
                    if ((1 << i) & m)
                    {
                        maxi = min(maxi, i);
                        break;
                    }
                }
            }
        }
        int a=maxi;
        if( arr[2]!=0 || arr[1]|| arr[3] )
        {
            a=1;
        }

        if (arr[0] >= arr[2])
        {
            cout << (arr[2]) * 2 + (arr[0] - arr[2]) +a-1 ;
            nl;
            continue;
        }
        else
        {
            cout << (arr[2] - arr[0]) + (arr[0] * 2);
            nl;
        }
    }
    return 0;
}