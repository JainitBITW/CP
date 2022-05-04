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
char c;
typedef long long  ll; 
int m , n , q;


int main()
{
JALDI jaldi 
int r1 , r2, c1,c2 , d1, d2;
cin>> r1>> r2>> c1>>c2 >> d1>> d2;
int a ,b, c, d; 

bool wow = false ; 
FOR ( i , 1, 10 )
{
    FOR( j,1 , 10 )
    {
        if ( i!=j)
        FOR( k , 1 , 10 )
        {
            if ( k!=j && k!=i)
            FOR ( l , 1, 10 )
            {
                if ( k!=l && l!=j&&l!=i )
                if ( (i + j == r1) && (i + k ==c1)&& (k+l ==r2)&& (j+l==c2) &&(i+l==d1)&&(j+k==d2) )
{
    a= i ; b= j ; c= k ; d= l;
    wow = true ;
}
            }
        }
    }
}
if ( wow)
{
    cout<<a<<' '<<b;nl;
    cout<<c<<' '<<d;

    
}
else
cout<<-1;



    return 0; 
}