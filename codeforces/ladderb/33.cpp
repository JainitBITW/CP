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

            cin >>
        n;
    int min1 = INT_MAX;
    int max2 = -1;
    int min2 = INT_MAX;
    int max1 = -1;
    FOR(i, 0, n)
    {
        cin >> m;
        cin >> q;

        min1 = min(min1, q);
        max1 = max(max1, m);
    }

    cin >> n;
    FOR(i, 0, n)
    {
        cin >> m;
        cin >> q;

        max2 = max(max2, m);
        min2 = min(q, min2);
    }

    int ans = 0;
 ans = max ({max2 - min1  , ans , max1 - min2});
 cout<<ans;

    return 0;
}