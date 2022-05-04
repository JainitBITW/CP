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

void print ( vector<int> &a )
{
    cout<<a.size()<<" ";

    for (auto &ele : a )
    {
        cout<<ele<<" ";
    }
    nl;

}

int main()
{
    JALDI jaldi

            cin >>
        n;
    vector<int> a;
    vector<int> b;
    vector<int> c;
    int count = 0;

    FOR(i, 0, n)
    {
        cin >> m;
        if (m < 0)
        {
            a.PB(m);
            count++;
        }

        else if (m > 0)
        {
            b.PB(m);
        }
        else
            c.PB(m);
    }

    if (b.size() == 0)
    {
        b.PB(a[0]);
        b.PB(a[1]);
         a.erase(a.begin() );
         a.erase(a.begin() );

    }

if ( a.size()%2 == 0 )
{
    c.PB( a[0]);
    a.erase(a.begin());
}
print( a );
print( b );
print( c );


    return 0;
}