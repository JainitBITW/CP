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
    JALDI jaldi bool win = false;
    cin >> c;
    string s, t;
    cin >> s >> t;
  

    if ((s[1] == t[1]) && (s[0] > t[0]))
    {
        win = true;
    }
    
    else if (s[1] == c&&(!(t[1]==c)))
    {
        win = true;
    }


    cout << (win ? "YES" : "NO");

    return 0;
}