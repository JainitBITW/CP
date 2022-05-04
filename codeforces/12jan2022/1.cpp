#include <bits/stdc++.h>
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
typedef long long ll;

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int l, n, sum = 0, z = 1;

        cin >> n >> l;
        int are[l];
        FOR(i, 0, l)
        are[i] = 0;
        FOR(ii, 0, n)
        {
            int a ; 
            cin>>a ;
            FOR(i, 0, l)
            {
                if (a % 2 == 1)
                {
                    are[i]++;
                }
                a/= 2;
            }
        }
        FOR(i, 0, l)
        {
            if (are[i] > n- are[i])
            {
                sum += z;
            }
            z*=2;

        }
        cout<<sum<<endl;
    }

    return 0;
}