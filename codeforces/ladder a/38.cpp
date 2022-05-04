#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define  S second 
#define  nl cout<<endl 
char c;
typedef long long  ll; 
int m , n , q;


int main()
{
JALDI jaldi 
ll n; 
cin>>n ; 
if ( n>=0 )
{
    cout<<n;
    return 0 ; 
}

cout<<max(((n/100)*10) +(n%10),n/10); 
    return 0; 
}