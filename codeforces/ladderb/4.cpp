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
    while (t--)
    {int ans=0; 
        cin >> n;
        bool nott[5010];
        FOR(i, 0, 5010)
        nott[i] = false;

        FOR(i, 0, n)
        {
            cin >> m;

            nott[m ] = true;
        }

        FOR ( i , 1, n+1 )
        if( !nott[i])ans++;

        cout<<ans;

    }
    
    return 0;
}