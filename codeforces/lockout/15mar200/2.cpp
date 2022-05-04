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
int m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    // cin >> t;
    while (t--)
    {

        int a, b, a1, b1;
        cin >> a >> b >> a1 >> b1 >> n;
        if (a1 < b1)
        {
            swap(a, b);
            swap(a1, b1);
        }

        int mini = 0, max = 0;

        int temp = (a * (a1 - 1) )+( b * (b1 - 1));
    
        if (temp < n)
        {
            cout << min(a + b, n - temp)<<" ";
        }
        else cout<<0<<" ";
        if (b * b1 > n)
        {
            cout << n / b1;
        }
        else 
        {
            cout<< b+ min( a, ( n- b*b1)/a1);
        }
    }
    return 0;
}