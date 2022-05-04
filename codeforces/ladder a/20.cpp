#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define  S second 
typedef long long  ll; 


int main()
{
JALDI jaldi 


int a , b; 
cin>>a >>b;

FOR(i, 0 , a){
FOR(j , 0 , a )
if ( i==j)cout<<b<<' ';
else cout<<0 <<" ";

cout<<endl;
}

    return 0; 
}