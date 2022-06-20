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
        cin >> n >> m;

        vector<ll> v(n + 1);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(ALL(v));
        reverse(ALL(v));

        FOR(i, 1, n )
        v[i] = v[i] + v[i - 1];

        // for (auto ele : v)
        //     cout << ele << " ";

        while (m--)
        {
            int k, l;
            cin >> l >> k;
            // if( k==1)
            // {
            //     cout<<v[
            // }
            if (l == k)
            {
                cout << v[l-1] << endl;
                continue;
            }
            cout << v[l - 1] - v[ l-k -1];

            nl;
        }
    }
    return 0;
}