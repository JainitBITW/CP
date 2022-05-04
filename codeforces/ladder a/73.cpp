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
char c;
typedef long long ll;
int m, n, q;

int main()
{
    JALDI jaldi

        int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        set<char> se;

        for (int i = 0, j = 1; i < s.size(), j < s.size();)
        {
            if (s[i] == s[j])
            {
                i = i + 2;
                j = j + 2;
            }
            else if ((s[i] != s[j]))
            {
                se.insert(s[i]);
                i++;
                j++;
            }
        }

        if ( (( count(s.begin(), s.end() , s[s.size() - 1])%2==1) ||(s[s.size() - 1] != s[s.size() - 2])) && (s.size() > 1))
          se.insert(s[s.size() - 1]);

        cout << " ";

        for (auto &ele : se)
        {
          
          cout<<ele;
        }
        if (s.size() == 1)
        {
            cout << s;
        }
        nl;
    }

    return 0;
}