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
bool cmp( pair<char , int > &a , pair<char , int> &b )
{
    return a.F< b.F;
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    while (t--)
    {

        string s;
        cin >> s;
        vector<pair<char, int>> v(4);
        FOR(i, 0, s.size())
        {
            if (s[i] == '!')
                v[i % 4].S++;
        }
        FOR(i, 0, SZ(s))
        {
            if (s[i] != '!')
                v[i % 4].F = s[i];
        }
sort( ALL(v), cmp);
cout<<v[2].S<<" "<<v[0].S<<" "<<v[3].S<<" "<<v[1].S;



    }
    return 0;
}
