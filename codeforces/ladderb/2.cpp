#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define MP make_pair
#define PB push_back
#define S second
#define nl cout << endl
#define nl cout << endl
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
int m, n, q;
#define N 105

int main()
{
    JALDI jaldi

        int t = 1;
    cin >> t;
    int a[N], b[N], c[N], d[N], bo[N];
    FOR(i, 0, t)
    bo[i] = true;

    FOR(i, 0, t)
        cin >> a[i] >> b[i] >> c[i] >> d[i];

FOR ( i , 0 , t )
{
    FOR ( j , 0 ,t )
    {
        if ( i ==j )continue ; 
        
        if ( a[i]> a[j] and b[i]> b[j] and c[i]> c[j] )
        {
            bo[j]=false ;
        }

    }
}

int mini = 1000000; 
int ans ; 
FOR (  i,0 , t )
{
    if ( d[i]< mini and bo[i] )
    {
        mini = d[i];
        ans = i+1;
    }
}
    

cout<<ans;
    return 0;
}