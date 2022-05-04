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
bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.F > b.F;
}

int main()
{freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin>>t;
    while (t--)
    {

        cin >> n >> m;
        vector<pair<int, int>> v(n);

        FOR(i, 0, n)
        {
            v[i].S = i + 1;
            cin >> v[i].F;
        }

        sort(ALL(v), cmp);

        int mini = v[m - 1].F;
        cout << mini;
        nl;

        for (int i = 0; i < m; i++)
        {

            cout << v[i].S << " ";
        }
    }
    return 0;
}