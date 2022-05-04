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
char c;
typedef long long  ll; 
int m , n , q;


int main()
{
JALDI jaldi 
int a , b; 
cin>>n>>m>>a>>b;

double  q ,w ; 
q = max ( (3.0*n)/10,n - (n/250.0)*a );
w = max ( (3.0*m)/10,m - (m/250.0)*b );

if ( q>w)cout<<"Misha";
else if (w>q )cout<<"Vasya";
else cout<<"Tie";



    return 0; 
}