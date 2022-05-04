#include<bits/stdc++.h>
#define for (int i =a ; i<n ;i++) FOR(i,a,n)
#define ll long long int 
#define vp_ii vector <pair<int, int >> 
#define vp_ll vector <pair<long long , long long >> 
 
using namespace std; 
 
 
 void  weird( ll  n )
 {
     if ( n ==1 )
     {
         cout<<n ; 
         return  ; 
     }
 
     if ( n%2 == 0 )
     {
         cout << n <<" ";
         weird ( n/2);
     }
     else 
     {
         cout << n <<" " ;
         weird ( n*3 + 1 );
 
     }
 
 }
 
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
ll n ; 
cin >> n;
weird(n);
return 0 ; 
 
    return 0; 
}
