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
cin>>n >> m ; 
vector<int> v(n);
FOR(i , 0 , n )
{
    int a, b; 
    cin>>a>>b; 
    if ( b> m )
    {
        v[i]= a- (b-m);

    }
    else{
        v[i]= a;
    }



}
sort (v.begin(), v.end());
cout<<*(--v.end());



    return 0; 
}