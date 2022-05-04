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
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        n = s.size();
        vi hsh(26, 0);
        int mini = 0;
        int maxi = 0;
        int ma = -1;
        FOR(i, 0, n - 1)
        {
            hsh[s[i] - 'a']++;
        }
        hsh[s[n - 1] - 'a']++;

        FOR(i, 0, 26)
        {
            if (hsh[i])
                mini++;
            if (hsh[i] > 1)
                maxi++;
            ma = max(ma, hsh[i]);
        }

        if (maxi > 1)
        {
            cout << "NO";
            nl;
            continue;
        }
        if (maxi == 1)
        {
            if (s[0] == s[n - 1] and ma == 2)
            {
                cout << "YES";
                nl;
                continue;
            }
            else if (mini == 1)
            {
                cout << "YES";
                nl;
                continue;
            }
            else
            {
                cout << "NO";
                nl;
                continue;
            }
        }
        if (maxi == 0)
        {

            cout << "YES";
            nl;
            continue;
        }
    }
    return 0;
}