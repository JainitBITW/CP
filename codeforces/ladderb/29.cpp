#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define MP make_pair  
#define PB push_back  
#define  S second 
#define  nl cout<<endl 
#define  nl cout<<endl 
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long  ll; 
typedef vector <int > vi ; 
typedef vector <ll > vll ; 
typedef vector<vi>  vvi; 
int m , n , q;


int a[111111],n;
 
int main()
{
 
    cin >> n;
 
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    int ans=2;
    int cnt=2;
    for (int i=2;i<n;i++) {
        cnt++;
        if (a[i]!=a[i-1]+a[i-2]) cnt=2;
        ans=max(ans,cnt);
    }
 
    ans=min(ans,n);
 
    cout << ans;
 
    return 0;
}