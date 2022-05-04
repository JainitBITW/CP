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
void solve()
{

    string s;
    cin >> s;
    int n = s.size();
    if( s[0]== 'B' || s[n-1]=='A')
    {
        cout << "NO";
                nl;
                return;
    }
    int a = 0;
    FOR(i, 0, n)
    {
        if (s[i] == 'B')
        {
            if (a <= 0)
            {
                cout << "NO";
                nl;
                return;
            }
            a--;
        }
        else
            a++;
    }
    cout << "YES";
    nl;
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
        solve();
    }
    return 0;
}