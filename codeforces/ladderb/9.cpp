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


 int t = 1 ;
while ( t--){

    cin>>n; 
    string s; 
    cin>>s; 
    int a = count( ALL(s), 'I');
    int b = count( ALL(s), 'A');


   if ( a==1 )
   {
       cout<<1; 
   }
else if ( a==0 and b>0 )
{
    cout<<b;
}
else cout<<0 ;


}
    return 0; 
}