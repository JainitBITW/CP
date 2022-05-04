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
    while (t--)
    {

        cin >> n;
        cin >> m;
        int mini = 0, maxi = 0;
        vi v(n);
        vi w(n);

        FOR(i, 0, n)
        {
            cin >> v[i] >> w[i];
            mini += v[i];
            maxi += w[i];
        }

        if (maxi < m or mini > m)
        {
            puts("NO");
            break;
        }
cout<<"YES";
nl;
        int i = 0;
        while (mini != m)
        {
            if (v[i] < w[i])
            {
                v[i]++;
                mini++;
            }
            else
                i++;
            if (i == n)
                break;
        }
        for (auto &ele : v)
        {
            cout << ele << " ";
        }

        
    }
    return 0;
}