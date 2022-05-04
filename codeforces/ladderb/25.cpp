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
int m, n, q;
vi a(1100), b(1100);

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi
            cin >>
        n >> m;
    FOR(i, 0, m)
{cin >> a[i];
    b[i] = a[i];}

    int ans1 = 0, ans2 = 0;

    FOR(i, 0, n)
    {
        auto it = max_element(ALL(a));
        ans1 += *it;
        *it -= 1;
    }
    FOR(i, 0, n)
    {
        int mmin = INT_MAX;
        int c = 0;
        FOR(i, 0, m)
        if (b[i] and mmin > b[i])
        {
            mmin = b[i]; c = i;
        }
        ans2 += mmin;
        b[c]--;
    }
    cout << ans1 << " " << ans2;

    return 0;
}