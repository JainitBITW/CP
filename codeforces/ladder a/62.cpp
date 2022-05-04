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

            cin >>
        n;
    

    vector<pair<int, int>> v(n);
    FOR(i, 0, n)
    {
        cin >> m >> q;
        v[i] = MP(m, q);
    }
    int counter = 0;

    FOR(i, 0, n)
    {bool a = 0, b = 0, c = 0, d = 0;
        FOR(j, 0, n)
        {
            if ((v[i].F == v[j].F) && (v[i].S > v[j].S))
            {
                a = true;
            }
            if ((v[i].F == v[j].F) && (v[i].S < v[j].S))
            {
                b = true;
            }
            if ((v[i].F > v[j].F) && (v[i].S == v[j].S))
            {
                c = true;
            }
            if ((v[i].F < v[j].F) && (v[i].S == v[j].S))
            {
                d = true;
            }
        }
        if (a && b && c && d)
        {
            counter++;
        }

    }
    cout<<counter;
    return 0;
}