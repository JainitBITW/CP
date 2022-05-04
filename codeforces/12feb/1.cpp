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
void solve()
{
    cin >> n;
    vi v(n);
    bool wow = false;
    FOR(i, 0, n)
    {
        cin >> v[i];
    }
    int jaz = *max_element(v.begin(), --v.end());
    int kaz = *min_element(++v.begin(), v.end());
    if (v[n - 1] >= jaz or v[0] <= kaz)
    {
        puts("NO");
        return;
    }
    puts("YES");
    return;
}

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
    vi v(n);
    bool wow = false;
    FOR(i, 0, n)
    {
        cin >> v[i];
    }
    vi k = v;
    sort( ALL(v));
    FOR ( i , 0 , n)
    if ( k[i]!= v[i])
    {
        puts("YES");
        wow =true ;
        break;
    }
    if (!wow)puts("NO");
    }
    return 0;
}