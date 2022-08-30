#include <bits/stdc++.h>
using namespace std;

#include <math.h>

/***********************************************************************/
#ifdef LOCAL
#include "prettyPrint.h"
#endif
/***********************************************************************/
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1) //for loop from k to n in correct order
#define ll long long
/***********************************************************************/
typedef pair<int, int>    pii;    // pair of two integers
typedef pair<ll, ll>	  pll;    // pair of two long long
typedef vector<int>		  vi;     // int vector
/***********************************************************************/
#define deb(x) cout << #x << "=" << x << '\n'  //prints /name of x/ = /value of x/
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << '\n' 
/***********************************************************************/
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))

#define pb push_back
#define mp make_pair
/***********************************************************************/

void testCase() {
    double n, sigma;
    cin >> n >> sigma;

    if(n == 1) {
        if(sigma == 0) {
            cout << 23;
        }else {
            cout << -1;
        }
        return;
        // else cout << -1;
    }

    for(int i = 0; i < n-1; i++) {
        cout << 0 << ' ';
    }
    cout.precision(14);
    double ans = sqrt((sigma)/(n-1))*n;
    cout << ans ;

}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;

    while(t--) {
        testCase();
        cout << '\n';
    }

    return 0;
}