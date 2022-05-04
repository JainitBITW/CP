#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define  S second 
#define  nl cout<<endl 
typedef long long  ll; 
int m , n , a, b, p , q;
char c;


int main()
{
JALDI jaldi 

cin>>n; 
FOR(i , 0 , n )
{
    cin>>c ; 
    if ( c=='A')a++;

}
if ( a==n-a)cout<<"Friendship" ;
else if ( a >n-a)cout<<"Anton";
else cout<<"Danik";




    return 0; 
}