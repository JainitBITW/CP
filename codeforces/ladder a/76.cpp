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

        string s,
        t;
    cin >> s >> t;
    int ct = 0;
    int a[2];

    if (s.size() != t.size())
    {
        cout << "NO";
        return 0;
    }
    int k, l;

    FOR(i, 0, s.size())
    {
        if ( ct>2)
        {
            cout<<"NO";
            return 0 ;
        }
        if (s[i] != t[i])
        {
            a[ct] = i;
            ct++;
        }
    }
    if ( s.size()!=1 &&ct==2)
    swap(s[a[0]], s[a[1]]);


    
    cout << (s == t ? "YES" : "NO");


    return 0;

}