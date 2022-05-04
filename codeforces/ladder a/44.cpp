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

cin>>n>>m ; 
int jokes = 0 ;
int time = 0 ;


FOR( i, 0 , n )
{
    cin>>q;
    time+=q;

    


}
time+=(10*(n-1));
jokes+=(2*(n-1))+((m-time)/5);
if ( time>m)
{
    cout<<-1;
    return 0 ; 

}

cout<<jokes;



    return 0; 
}