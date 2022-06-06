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
    cin >> t;
    while (t--)
    {
        cin >> n;
        int maxa = -1, maxb = -1;
        FOR(i, 0, n)
        {
            cin >> q;
            maxa = max(maxa, q);
        }
        cin >> m;
        FOR(i, 0, m)
        {
            cin >> q;
            maxb = max(maxb, q);
        }
        if (maxa > maxb)
        {
            cout << "Alice";
            nl;
            cout << "Alice";
            nl;
        }
        else if (maxb > maxa)
        {
            cout << "Bob"
                 << "\n"
                 << "Bob";
                 nl;
        }
        else
        {
            cout<<"Alice"<<"\n"<<"Bob";
            nl;
        }
    }
    return 0;
}