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
bool cmp ( int a, int b)
{
    return a>b;
}

int main()
{
JALDI jaldi 

cin>>n ; 

unordered_map <int,int> m ; 
vector <int> v; 

FOR ( i , 0 ,n)
{
    cin>>q;
    m[q]++;
}

for ( auto &ele : m )
{
    v.PB ( ele.S);
}
sort ( v.begin(), v.end(), cmp );

if (v[0]> (n+1)/2 )
{
    cout<<"NO";
    return 0 ;
}
cout<<"YES";





    return 0; 
}