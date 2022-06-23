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
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
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
    cin >> t;
    while (t--)
    {
        cin >> n;
        vll v(n);
        ll a = 0, b = 0, c = 0, maxi = INT_MIN , mini=INT_MAX , m1 =0 , m2=0;



        FOR(i, 0, n)
        {
            cin >> v[i];
            a += v[i];
            if (!b && a == 0)
                b = i;
            if (v[i] != 0)
                c = i;

            if( v[i]>= maxi) maxi= v[i], m1=i;
            if( v[i]<= mini) mini= v[i], m2=i;
            
        }
        // cout << a << " " << b << " " << c << " ";
        // nl;

        if ((a == 0 && v[c] < 0 && v[0] > 0 && m2 > m1&&  b == c) || (v[c] == 0))
        {
            cout << "Yes";
            nl;
        }
        else
        {
            cout << "No";
            nl;
        }
    }
    return 0;
}