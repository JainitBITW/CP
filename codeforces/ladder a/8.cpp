#include <bits/stdc++.h>
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define ll long long int
#define vp_ii vector<pair<int, int>>
#define vp_ll vector<pair<long long, long long>>

using namespace std;

int main()
{

    int n;
    cin >> n;
    int min , ans;
    int max;
    vector<int> group(n);
    FOR(i, 0 ,n ) cin>>group[i];

    max = find(group.begin(),--group.end(),*max_element (group.begin(), group.end())) - group.begin();
    reverse(group.begin(),group.begin()+ n);
    min = find(group.begin(),--group.end(),*min_element (group.begin(), group.end())) - group.begin();

if ( max+ min >=n)
{
    ans = max +min - 1 ;
}
else ans = max +min ;

cout << ans ;

    

    return 0;
}