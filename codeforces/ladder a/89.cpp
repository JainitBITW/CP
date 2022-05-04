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
int m , n , q;


int main()
{
JALDI jaldi 
cin>>n>>m; 
vector <ll> v(5,0);
vector <ll> w(5,0);
FOR ( i , 1, n+1 )
{
    v[i%5]++;

}
FOR ( i , 1, m+1 )
{
    w[i%5]++;

}
ll ans = 0 ;
ans += ( w[0]*v[0]) ;

FOR ( i , 1, 5 )
{
    ans+= ( w[i]*v[5-i]);

}
cout<<ans;

    return 0; 
}