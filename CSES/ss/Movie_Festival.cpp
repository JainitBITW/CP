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
#define nl cout << '\n'
#define ALL(container) (container).begin(), (container).end()
#define MAX 1111111
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    if (a.S == b.S)
        return a.F > b.F ; 
    
    return a.S< b.S; 

}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        cin >> n;

        vector<pair<int, int>> v(n);
        FOR(i, 0, n)
            cin >> v[i].F >> v[i].S;

        sort ( ALL( v),cmp );

        int end = 0 ; 
        FOR( i , 0 , n )
        {
            if( v[i].F >= end )
            {
                m++; 
                end= v[i].S;
            }
        }

        cout<<m ;


        
    }

    return 0;
}