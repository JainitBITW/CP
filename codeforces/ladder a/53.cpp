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

cin>>n;
int a,b,c;
ll  s[3];
FOR( i , 0 , 3)s[i]=0;

FOR(i, 0 , 3*n)
{
    cin>>a;

    s[i%3]+=a;
   

    
}

cout<<(s[0]==0&&s[1]==0&&s[2]==0? "YES":"NO");





    return 0; 
}