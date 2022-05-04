#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
typedef long long ll;

int main()
{
    JALDI jaldi int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    vector<int> v;
    v.push_back((l * k )/ nl);
    v.push_back(c * d);
    v.push_back(p / np);

    int min = *min_element(v.begin(), v.end());
    cout<<min/n;


    return 0;
}