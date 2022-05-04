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
    int ans = INT_MAX;
    if ( n==2)
    {
        cout<<v[1]-v[0];
        return 0;
    }

    FOR(i, 1, n - 1)
    {
        int t = v[i];
        v.erase(v.begin()+ i);
        int temp = INT_MIN;
        FOR(j, 0, n - 1)
        {
           

            if ((v[j + 1] - v[j]) > temp)
            {
                temp = (v[j + 1] - v[j]);
            }
        }
        if ( temp <ans)
        {
            ans= temp;
        }
        v.insert(v.begin()+i, t);
    }
    cout<<ans;

    return 0;
}