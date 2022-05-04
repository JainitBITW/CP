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
#ifndef ONLINE_JUDGE freopen(fi, "r", stdin); freopen(fo, "w", stdout);
#else
online submission
#endif
char c;
typedef long long ll;
int m, n, q;

int main()
{

    JALDI jaldi

        vector<int>
            v(3);
    FOR(i, 0, 3)
    v[i] = i + 1;

    cin >> n;
    FOR(i, 0, 3)
    {
        cin >> m >> q;
        swap(v[m - 1], v[q - 1]);
    }
    int a = find(v.begin(), v.end(), n) - v.begin();
    cout << a + 1;

    return 0;
}