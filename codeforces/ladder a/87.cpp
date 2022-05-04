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
        string s;
    cin >> s;
    cin >> n;
    int ct = 0;
    int z = s.size() / n; 
    if ( s.size()%n != 0 )
    {
        cout << "NO";
            return 0;

    }

    for (int i = 0;i < s.size();)
    {


        string t = s.substr(i, z);
        string p = t;
        reverse(t.begin(), t.end());
        if (p != t)
        {
            cout << "NO";
            return 0;
        }

        i+=( z ); 
    }
    cout<<"YES";
    return 0;
}