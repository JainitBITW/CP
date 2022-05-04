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
        n >> m;
    int x;
        int cnt = 0;

    vector<int> mini;
    

    FOR(i, 0, n)
    {
        int z = INT_MAX;
        cin >> q;
        FOR(i, 0, q)
        {
            cin >> x;
            z = min(z, x);
        }
        if (m > z)
        {
            mini.PB(i+1);
            cnt++;
        }

    }

    if (cnt== 0)
    {
        cout << 0;
        return 0;
    }
    cout << cnt;
    nl;
    for (auto &ele : mini)
    {
        cout << ele << " ";
    }

    return 0;
}