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
int st(string s)
{
    ll ans = 0;
    ans += ((s[0] - '0') * 10 * 60);
    ans += ((s[1] - '0') * 60);
    ans += ((s[3] - '0') * 10);
    ans += ((s[4] - '0'));
    return ans;
}
string ti(int i)
{
    int k = i / 60;
    string s = {""};
    s.PB(k / 10 + '0');
    s.PB(k % 10 + '0');
    s.PB(':');
    s.PB((i % 60) / 10 + '0');
    s.PB((i % 60) % 10 + '0');
    return s;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin>>t;
    while (t--)
    {
        string s , t; 
        cin>>s>>t; 
        cout<<ti ( (st( s)+ st( t))/2);

    }
    return 0;
}