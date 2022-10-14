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
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
const ll MOD = 1000000007;
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
        vll v(n + 2), w(n + 2);

        FOR(i, 0, n)
        {
            cin >> v[i];
        }

        FOR(i, 0, m)
        {
            int a, b;
            cin >> a >> b;

            w[a]++;
            w[b + 1]--;
        }

        FOR(i, 1, n + 2)
        {
            w[i] += w[i - 1];
        }
        ll ans = 0;
        sort(ALL(w), greater<ll>());
        sort(ALL(v), greater<ll>());

        FOR(i, 0, n)
        {
            ans += (v[i] * w[i]);
        }
        cout<<ans;
    }
    return 0;
}