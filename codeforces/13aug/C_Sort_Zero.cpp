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
        vll v(n);
        map<ll, int> mp;

        FOR(i, 0, n)
        cin >> v[i];

        if (n == 1)
        {
            cout << 0;
            nl;
            continue;
        }
        int i = n - 1;
        for (i = n - 1; i > 0; i--)
        {
            if (v[i] < v[i - 1])
            {
                i--;
                break;
            }
            else
            {
                if (!mp[v[i]])
                    mp[v[i]] = i;
            }
        }

        if (i == 0 && v[0] <= v[1])
        {
            cout << 0;
            nl;
            continue;
        }

        int ans = -10;

        FOR(j, 0, i + 1)
        {
            if (mp[v[j]])
                ans = max(mp[v[j]], ans);
            else
            {
                ans = max(ans, j);
            }
        }
        map<ll, int> mp2;
        FOR(k, 0, ans + 1)
        {
            mp2[v[k]]++;
        }
        cout << mp2.size();
        nl;
    }
    return 0;
}