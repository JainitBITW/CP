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
typedef vector <int > vi ; 
typedef vector <ll > vll ; 
typedef vector<vi>  vvi; 
int m , n , q;


int main()
{
 //freopen (file".in", "r", stdin);
//freopen (file".out", "w", stdout);
JALDI jaldi 

 int t = 1 ;
// cin>>t;
while ( t--){


    int a[9];
    for(int i = 0; i < 9; ++i)
        scanf("%d", a+i);
    a[0] = (a[2] + a[5] + a[1] + a[7] - a[3] - a[6]) / 2;
    a[4] = a[2] + a[5] - a[0];
    a[8] = a[0] + a[3] + a[6] - a[5] - a[2];
    for(int i = 0; i < 9; ++i)
        printf("%d%c", a[i], i%3 == 2 ? '\n' : ' ');

}
    return 0; 
}
