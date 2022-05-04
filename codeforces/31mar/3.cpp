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
string t = {""};

void don(int i,string s)
{
    if (i == n)
    {

        return;
    }

    



}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int te = 1;
    cin >> te;

    while (te--)
    {
        t = {""};
        string s;

        cin >> s;
        n = s.size();
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                t.PB(s[i]);
                continue;
            }

            if (s[i] == s[i + 1])
            {
                i++;
            }
            else
            {
                t.PB(s[i]);
            }
        }

        cout << t;
        nl;
    }
    return 0;
}