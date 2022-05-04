#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
#define nl cout << endl
char c;
typedef long long ll;
int m, n, q;

int main()
{
    JALDI jaldi

            cin >>
        n >> m;

    vector<int> s;
    FOR(i, 0, m)
    {
        cin >> q;
        s.push_back(q);
    }
    sort(s.begin(), s.end());

    int a = INT_MAX;

    for ( int i = 0 ; i<m;i++)
    {
        if ( (i+n-1) == s.size())
        {
            break;
        }

        if ( (s[i+n-1]- s[i])<a)
        {
            a = s[i+n-1]- s[i];
        }

    }

    cout << a;

    return 0;
}