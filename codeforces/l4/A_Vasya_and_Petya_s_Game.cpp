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
vi hsh(1110);
vi hsh2(1110);
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        cin >> n;
        if (n == 1)
        {
            cout << 0;
            nl;
            return 0;
        }

        FOR(j, 2, n + 1)
        {
            int x = j;
            for (int i = 2; i * i <= x; i++)
            {
                int z = 1;
                while (x % i == 0)
                {
                    z *= i;
                    x /= i;
                    hsh[z]++;
                }
            }
            hsh[x]++;
        }

        FOR(i, 2, n + 1)
        {
            if (hsh[i])
                m++;
        }
        cout << m << endl;
        for (int i = 2; i < 1110; i++)
        {
            int z = i;
            if (hsh2[z] == 0)
            {
                while (z <= n)
                {
                    hsh2[z] = 1;
                    cout << z << " ";
                    z *= i;
                }
            }
            int s = i;
            while (s <= n)
            {
                hsh2[s]++;
                s += i;
            }
        }
    }
    return 0;
}