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

        cin >> n >> m;
        int maxi = INT_MAX;
        int maxic = INT_MIN;
        int minic = INT_MAX;

        FOR(i, 0, n)
        {
            cin >> q;
            maxic = max(maxic, q);
            minic = min(minic, q);
        }

        FOR(i, 0, m)
        {
            cin >> q;
            maxi = min(maxi, q);
        }

        maxic = max( minic*2 , maxic);
        // cout<<maxic<<minic <<maxi ; 


        if ( maxic < maxi)cout<<maxic; 

        else cout<<-1;


        
    }
    return 0;
}