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

bool cmp(int &a, int &b)
{
    return a < b;
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

        bool wow = false;
        cin >> n;
        vi v(n);
        FOR(i, 0, n)
        cin >> v[i];
        vi s = v;
        sort(ALL(s));
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] != v[i])
            {
                wow = true;
                break;
            }
        }

        if (wow)
        {
            int j = min_element(v.begin() + i, v.end()) - v.begin();
reverse ( v.begin()+i , v.begin()+j+1);
        }
        FOR(k, 0, n)
        cout << v[k] << " ";

        nl;
    }
    return 0;
}