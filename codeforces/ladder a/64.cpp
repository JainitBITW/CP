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

cin>>m >>n; 



FOR ( i , 0 , m )
{
    FOR ( j , 0 , n )
    {
        cin>>q;
        if ( i==0||i==(m-1)||j==0||j==(n-1))
        {
            if (q==1 )
            {
                cout<<2;
                nl;
                 return 0 ;
            }
        }
    }
}

cout<<4;





    return 0; 
}