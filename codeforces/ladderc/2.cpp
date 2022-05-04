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
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
   
    while (t--)
    {
        cin >> n;
        cin >> m;
        vll bui(n+1);
        bui[0]=0;
        FOR(i, 1, n+1)
        {
            cin >> q;
           
            bui[i] = q + bui[i - 1];
            continue;
          
        }

        while (m--)
        {
            cin >> q;

            ll lo = 0;
            ll hi = n ;

            ll mid;
            while (lo < hi)
            {
                mid = (lo + hi) / 2;

                if (q <= bui[mid])
                {
                    hi = mid;
                }
                else
                    lo = mid + 1;
            }
            cout << lo <<" "<< q - bui[lo-1] ;
            nl;


        }
    }
}