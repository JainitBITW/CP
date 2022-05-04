#include<bits/stdc++.h>
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
typedef long long  ll; 

using namespace std; 

 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int n ; 
cin>> n; 
int sum = INT_MAX;
for (int i = 0; i < n; i++)
{
    int a; 
    int b; 
    cin>>a>>b; 
    if ( b/a < sum )
    {
        sum = b/a ;

    }

}
cout<<sum <<endl ; 



    return 0; 
}