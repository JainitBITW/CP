#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;

int main()
{
    JALDI jaldi

        int n;
    cin >> n;
    int ans= 0 ;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    FOR( i , 0 ,n )
    {
        FOR (j , 0 , n )
        {
            if ( v[i].F==v[j].S)
            {
                ans ++;
            }
        }
    }
cout<<ans;

    return 0;
}