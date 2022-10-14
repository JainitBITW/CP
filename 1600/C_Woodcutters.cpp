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
        cin >> n;
        vi v(n), w(n);
        FOR(i, 0, n)
        {
            cin >> v[i] >> w[i];
        }
        if( n<3)
        {
            cout<<n;nl;
            continue;
        }
        int last = v[0];
        FOR(i, 1, n - 1)
        {
            if (w[i] >= v[i + 1] - v[i])
            {
                if (w[i] >= v[i] -last)
                {
                    last = v[i];
                    continue;
                }
                else
                {
                    last = v[i];
                    q++;
                }
            }
            else
            {
                if (w[i] < v[i]-last)
                {
                    last = v[i];
                    q++;
                }
                else
                {
                    last = v[i] + w[i];
                    q++;
                }
            }
        }
        cout << q + 2;
    }
    return 0;
}