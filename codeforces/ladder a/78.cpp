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

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    JALDI jaldi
            cin >>
        n >> m >> q;
    vector<int> v(n);

    int soc = q;
    int ct = 0;
    FOR(i, 0, n)
    cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    FOR(i, 0, v.size())
    {
        if (soc >= m)
        {
            break;
        }

        else
        {
            soc += (v[i] - 1);
            ct++;
        }
    }
    if (soc >= m)
        cout << ct;

    else
        cout << -1;

    return 0;
    
}