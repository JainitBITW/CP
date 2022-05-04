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
string t;
bool ispalindrome(int i)
{
    bool wow = 1;
    bool wow1 = 1;
    if (i + 5 <= n)
    {
        for (int j = i; j < i + 5; j++)
        {
            if (t[j] != t[i + 5 - j])
            {
                wow = 0;
                break;
            }
        }
    }
    else
        wow = 0;
    if (i + 6 <= n)
    {
        for (int j = i; j < i + 6; j++)
        {
            if (t[j] != t[i + 6 - j])
            {
                wow1 = 0;
                break;
            }
        }
    }
    else
        wow1 = 0;

    return wow || wow1;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    bool wow = 1;
    cin >> t;
    while (t--)
    {
        string t;

        cin >> t;
        n = t.size();
if ( n<=4)
{
    cout<<"POSSIBLE";
    nl;
    continue;
}
        FOR(i, 0, n)
        {
            if (t[i] == '?')
            {
                if (t[n - 1 - i] == '?')
                {
                    t[i] = '1';
                    t[n - 1 - i] = '0';
                }
                else if (t[n - 1 - i] == '0')
                {
                    t[i] = '1';
                }
                else
                {
                    t[i] = '0';
                }
            }
        }
cout<<t<<endl;
        FOR(i, 0, n)
        {
            if (ispalindrome(i))
            {
                wow = 0;
                break;
            }
        }
        if ( wow )
        {
            cout<<"POSSIBLE";
        }
        else
        {
            cout<<"IMPOSSIBLE";
        }
        nl;
    }
    return 0;
}