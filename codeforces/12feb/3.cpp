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
int m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vi v(n);
        int count = 0;
        int count1 = 0;
        int countodd=0;

        FOR(i, 0, n)
        cin >> v[i];

        FOR(i, 1, n - 1)
        {
            if (v[i] <= 1)
                count++;
            if (v[i] == 1)
                count1++;
                if ( v[i]%2)countodd++;

        }
        int total = accumulate(++v.begin(), --v.end(), 0);
        int ans = (total +1 ) / 2 + (countodd/2);
        
        if ((count == (n-2)and count1))
        {
            cout << -1;
            nl;
            continue;
        }
        FOR ( i ,1 , n-2)
        {
            if (1 )exit;
        }
    
        
        cout << ans;
        nl;
    }
    return 0;
}