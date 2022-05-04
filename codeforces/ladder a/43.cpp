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
int m, n, q;

int main()
{
    JALDI jaldi

            cin >> n;
    int a[n];
    FOR(i, 0, n)
        cin >> a[i];



    vector<int> v(n);

    FOR(i, 0, n)
    {
        int sum = 0;

        FOR(j , 0 , a[i])
        {
            cin >> q;
            sum += q;
           
        }

        v[i] = v[i] + (15 * a[i]) + (sum * 5);
    }
  
    int min = *min_element(v.begin(), v.end());
    cout<<min;

    return 0;
}