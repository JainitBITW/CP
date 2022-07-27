#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define pii pair<int,int>
#define ll long long
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define vi vector<int>

void solve()
{
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    ll total = 0;
    for(ll &x : v) {
        cin >> x;
        total += x;
    }
    
    int s=0, e=k-1;
    ll mx = -1;
    ll sum = 0;
    if(2 * k >= n) {
        cout << total;
        return;
    }
    for(int i=0; i<k; i++) {
        sum += v[i];
    }
    if(sum >= mx) {
        mx = sum;
    }
    int idx = 0;
    for(int i=k; i<n; i++) {
        sum -= v[idx++];
        sum += v[i];
        if(sum >= mx) {
            s = idx, e = i;
            mx = sum;
        }
    }
    ll ans = mx;
    // cout << s << ' ' << e << endl;
    vector<ll> v2;
    for(int i=0; i<n; i++) {
        if(i >= s and i <= e)
            continue;
        v2.pb(v[i]);
    }
    mx = -1;
    sum = 0;
    n = v2.size();
    for(int i=0; i<k; i++) {
        sum += v2[i];
    }
    if(sum > mx)
        mx = sum;
    idx = 0;
    for(int i=k; i<n; i++) {
        sum -= v2[idx++];
        sum += v2[i];
        if(sum >= mx) {
            mx = sum;
        }
    }
    ans += mx;
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while(t--)
        solve();
}