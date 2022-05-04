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

bool cmp ( int a , int b)
{
    return a>b;
}
int main()
{
JALDI jaldi 


cin>>n ; 
map<char,int> m;
int temp =INT_MIN;

FOR ( i  , 0 , 16)
{
    cin>>c;
    if (c=='.')continue;

    m[c]++;
    if( m[c]>temp)
    {
        temp= m[c];
    }


}


if ( temp>2*n)
{
    cout<<"NO";
    return 0 ;
}
cout<<"YES";




    return 0; 
}