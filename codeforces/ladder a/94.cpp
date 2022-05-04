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
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long  ll; 
int m , n , q;


int main()
{
JALDI jaldi 


 int t = 1 ;
// cin>>t;
vector<string> v= {  "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#", "A", "B", "H"};
while ( t--){
string a ,b , c; 
cin>>a>>b>>c; 
int x[3];
 x[0] = find( ALL( v), a)- v.begin() +1 ;
 x[1] = find ( ALL( v),b)- v.begin()+1;
 x[2] = find ( ALL( v), c)- v.begin() +1;
if ( x[0]>x[1])swap ( x[0],x[1] );
if ( x[1]>x[2])swap ( x[1] , x[2]);
if ( x[0]>x[1] )swap ( x[0],x[1] );

do {
if (((x[1]-x[0]+12)%12)==4 &&((x[2]-x[1]+12)%12) ==3 )
{
    cout<<"major";
    return 0 ;
}
else if (((x[1]-x[0]+12)%12)==3 &&((x[2]-x[1]+12)%12) ==4)
{
    cout<<"minor";
    return 0 ;
}
} while ( next_permutation(x,x+3));

puts("strange");



}
    return 0; 
}