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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

            cin >>
        n >> m;
    string s[n];
    string t = "";

    FOR(i, 0, n)
    cin >> s[i];


    FOR(i, 0, n)
    {
    
        FOR(j, 0, m)
        {    int f = 0;
            FOR(k, 0, m)
            {
                if (s[i][j] == s[i][k] and j != k)
                    f = 1;
            }
            FOR(k, 0, n)
            {
                if (s[i][j] == s[k][j] and i != k)
                    f = 1;
            }
            if (!f){
                cout<<s[i][j];
              }
        }
    }

    return 0;
}