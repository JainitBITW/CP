#include <bits/stdc++.h>

#define ll long long int
#define vp_ii vector<pair<int, int>>
#define vp_ll vector<pair<long long, long long>>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    ll sum = 0;
    ll tsum = 0;

    cin >> n;
    int i;

    for (int i = 1; i < n; i++)

    {
        int a;
        cin >> a;
        sum += a;
    }

    tsum = n * (n + 1) / 2;
    cout << (tsum - sum);
    return 0;
}