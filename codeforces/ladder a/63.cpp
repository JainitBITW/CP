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
char c;
typedef long long ll;
int m, n, q;

bool cmp ( pair<int,int> &a, pair<int,int> &b)
{
    if ( a.F==b.F)
    {
        return a.S>b.S;

    }
    return a.F<b.F;
}

int main()
{
    JALDI jaldi

int t; 
cin>>t;
while(t--){
        int s,
        n;
cin>>n>>s ; 
vector<pair<int,int>> v(n) ;

FOR( i , 0 , n )
{
    cin>>m;
  v[i].F=m;

}

FOR( i , 0 , n )
{
    cin>>m;
  v[i].S=m;

}
sort (v.begin(), v.end(), cmp);

FOR( i, 0, n)
{
    if ( s>=v[i].F)
    {
        s+=v[i].S;
    }
    else {
      break;

    }


}
cout<< s;
nl;
}

    return 0;
    
}