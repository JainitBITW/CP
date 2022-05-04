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
int m , n , a, b=0, p , q;


int main()
{
JALDI jaldi 
cin>>m>>n; 
int v[m][n] ;
int max[n];
FOR(i , 0 , n)max[i]= INT_MIN;



FOR(i , 0 , m )
{
    
    FOR(j , 0 , n )
    {
        cin>>c; 
        a = c- '0';
       
        v[i][j]=a;
    
        if( v[i][j] > max[j])
        {
            max[j]=a;

        }

    }
  
}


FOR(i , 0 , m)
{
    FOR(j , 0 , n)
    {
        if ( v[i][j]==max[j])
        {
b++;
break;
        }

    }
}
cout<<b;




    return 0; 
}