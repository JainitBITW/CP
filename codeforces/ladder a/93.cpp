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
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
int m, n, q;

int main()
{
    JALDI jaldi

        int t = 1;
    // cin>>t;
    while (t--)
    {
        cin >> n;
        vector<int> v(n);
        FOR(i, 0, n)
        {
            cin >> v[i];
        }

        FOR(i, 0, n)
        {
            FOR(j, i+1, n)
            {
                if (find(ALL(v), v[i] + v[j])!=v.end())
                {
                    int k = find(ALL(v), v[i] + v[j]) - v.begin();
                    cout << k+1 << " " << i+1 << " " << j+1;
                    return 0;
                }
            }
        }

        cout << -1;
    }
    return 0;
}