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
bool isprime(int n)
{
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
        {
            return false;
        }

    return true;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;

    vi v;
    FOR(i, 2, 100010)
    {
        if (isprime(i))
            v.PB(i);
           
    }
    nl;
    //   cin>>t;
    while (t--)
    {
        cin >> n >> m;
        int arr[n][m];
        FOR(i, 0, n)
        {
            FOR(j, 0, m)
            {
                cin >> arr[i][j];
                arr[i][j] = *lower_bound(ALL(v), arr[i][j]) - arr[i][j];
                
            }
            nl;
        }
        int sum = 0;
        int ans = INT_MAX;
        FOR(i, 0, n)
        {
            sum = 0;
            FOR(j, 0, m)
            {
                sum += arr[i][j];
            }
            ans = min(sum, ans);
        }
        FOR(i, 0, m)
        {
            sum = 0;
            FOR(j, 0, n)
            {
                sum += arr[j][i];
            }
            ans = min(sum, ans);
        }

        cout << ans;
    }
    return 0;
}