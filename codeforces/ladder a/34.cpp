#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
#define nl cout << endl
char c;
typedef long long ll;
int m, n, a, b, p, q;

bool cmp(int a, int b)
{
    return a > b;
}

int main()
{
    JALDI jaldi
            cin >>
        n;
    vector<int> v(n);

    FOR(i, 0, n)
    cin >> v[i];

    sort(v.begin(), v.end(), cmp);

    int i = 0;

    int sum = accumulate(v.begin(), v.end(), 0);
    if ( sum%2==0 )
    {
        sum /= 2;
        sum += 1;
    }
else
{
        sum = (sum + 1) / 2;
}

    while (1)
    {
        if (m >= sum)
        {
            break;
        }
        else
        {
            m += v[i];
            p++;
        }

        i++;
    }
    cout<<p ;

    return 0;
}