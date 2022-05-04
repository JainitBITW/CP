#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define  S second 
typedef long long  ll; 
int m , n , a, b, p , q;


int main()
{
JALDI jaldi 

vector<vector<int> > v(3);

cin>>n;
FOR(i, 0 ,n )
{
    cin>>m ; 
    v[m-1].push_back(i+1);

} 
m = min( {v[0].size(), v[1].size(), v[2].size()});
cout<<m<<endl;
FOR ( i , 0, m )
{
    cout<<v[0][i]<<" "<<v[1][i]<<" "<<v[2][i]<<endl;
}



    return 0; 
}