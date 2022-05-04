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
        vector<int> hello(n);

        FOR(i, 0, n)
            cin >> hello[i];
        sort(ALL(hello));
        int z = n-1;
        ll ans=0;
int j = 1;
        while (z >=0)
        {
            if (j&1)
                ans += (hello[z] * hello[z]);

            else
                ans -= (hello[z] * hello[z]);

j++;
                z--;
        }
        cout<<setprecision(20)<<ans*(double) 3.1415926536;

    }
    return 0;
}