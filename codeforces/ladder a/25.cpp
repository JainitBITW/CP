#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define  S second 
typedef long long  ll; 
int m , n , a, b, p , q;


int main()
{
JALDI jaldi 
cin>>n ; 
cin>> a; 
set<int> s; 
s.clear();
FOR(  i , 0 , a ){
cin>>m ;
s.insert(m);
}
cin>>b ; 
FOR( i, 0 ,b)
{
cin>>m ;
s.insert(m);
}

cout<<(n==s.size()?  "I become the guy.":"Oh, my keyboard!");

    return 0; 
}