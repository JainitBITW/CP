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
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
#define MOD (long long)1e9 + 7
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
map<int, int> mp;
string s;
void fin(int a)
{
    int i = a;
    if (s[i] == ')')
    {
        cout << i + 1 << " ";
        fin(i + 1);
    }
    if (s[i] == '-')
    {
        cout << i + 1 << " ";
        fin(i + 1);
    }
    if (s[i] == '(')
    {
        for (int j = i + 2; j < mp[i] + 1; j++)
        {
            fin(j);
        }
        cout << i + 1 << " ";
        i = mp[i] ;
        fin(i+1);
    }
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        string s;
        cin >> n;
        cin >> s;

        stack<int> st;

        FOR(i, 0, n)
        {
            if (s[i] == '-')
                continue;

            if (s[i] == '(')
                st.push(i);

            if (s[i] == ')')
            {
                int tmp = st.top();
                st.pop();
                mp[tmp] = i;
                continue;
            }
        }

        int i = 0;
        for (i = 0; i < n;)
        {
            if (s[i] == ')')
            {
                cout << i + 1 << " ";
                i++;
                continue;
            }
            if (s[i] == '-')
            {
                cout << i + 1 << " ";
                i++;
                continue;
            }
            if (s[i] == '(')
            {
                for (int j = i + 1; j < mp[i] + 1; j++)
                {
                    cout << j + 1 << " ";
                }
                cout << i + 1 << " ";
                i = mp[i] + 1;
                continue;
            }
        }
    }
    return 0;
}