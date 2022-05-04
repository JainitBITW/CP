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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.F > b.F;
}

int main()
{
    JALDI jaldi

            cin >>
        n;
    vector<pair<int, int>> v(n);
    FOR(i, 0, n)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
        {
            cout << "Happy Alex";
            return 0;
        }
    }

    cout << "Poor Alex";

    return 0;
}