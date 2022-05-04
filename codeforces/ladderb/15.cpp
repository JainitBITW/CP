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

            cin >>
        n;

    vector<int> v(n);
    FOR(i, 0, n)
    cin >> v[i];
    int maxi = INT_MIN;

    for (int i = 0; i < n ; i++)
    {
        int counter = 0;
        int l1 = v[i];
        int l2 = v[i];

        for (int j = i; j >= 0; j--)
        {
            if (v[j] > l1)
                break;

            counter++;
            l1 = v[j];
        }

        for ( int  k = i+1 ; k <n; k++)
        {
            if ( v[k]>l2)break;

            counter++;
            l2= v[k];
        }

        maxi = max(maxi , counter);
    }
cout<<maxi;
    return 0;
}