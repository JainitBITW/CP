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
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
int m, n, q;

ll solve(string s, int k)
{
    string t = s;
    reverse(ALL(s));
    string u = s;
    ll z= 0;

    if (k == 1)
    {
        if (t == u)
            return 1;
        else
            return 2;
    }

    if (t == u){
        string w= t+u ;
       z+= solve(w, k - 1);
        
    }
    else
    {
        string w = t+ u ;
      z+=  solve(w, k - 1);
      w= u+ t;
      z+=  solve(w, k - 1);
    }
    return z;
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        string s ;
        int n ;
        cin>>m>>n;
        cin>>s;
        

        cout<<solve( s , n );
    }
    return 0;
}