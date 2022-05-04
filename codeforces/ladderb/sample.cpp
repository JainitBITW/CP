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
const int N = 1e6;
int canremove[N];
int hsh[N];
int hp[N];

vi findprime(int x)
{
    vi v;
    while (x > 1)
    {
        int div = hp[x];
        while (x % div == 0)
            x /= div;
        v.PB(div);
    }
    return v;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi
            cin >>
        n >> q;
    FOR(i, 0, n)
    {
        cin >> m;
        hsh[m] = 1;
    }
    FOR(i, 2, N)
    if (hsh[i])
        for (ll j = i; j < N; j *= i)
            canremove[j] = 1;
canremove[1]=1;
    FOR(i, 2, N)
    if (!hp[i])
        for (int j = i; j < N; j += i)
            hp[j] = i;

    while (q--)
    {
        cin >> m;

        vi v = findprime(m);
        bool posible = false;

        FOR(i, 0, v.size())
        {
            FOR(j, i, v.size())
            {
                int product = v[i] * v[j];
                if (i == j && m % product != 0)
                    continue;
                if (canremove[m / product])
                {
                    posible = true;
                    break;
                }
            }
            if ( posible)break;
        }
        cout<<( posible? "YES":"NO");
        nl;

    }

    return 0;
}