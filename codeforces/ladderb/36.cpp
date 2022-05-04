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
typedef vector<pair<int, int>> vpi;
int m, n, q;
int vb, vs;
int xi, yi;
double dist(int a, int b, int c, int d)
{
    return sqrt(((a - c) * 1LL * (a - c)) + ((b - d) * 1LL * (b - d)));
}
double calculate(double x)
{
    return ((x / vb) + (dist(x, 0, xi, yi) / vs));
}
double inter( double x )
{
    return (dist(x, 0, xi, yi) / vs);
}
int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

            cin >>
        n >> vb >> vs;
    vector<double> stop(n);
    FOR(i, 0, n)
    cin >> stop[i];
    cin >> xi >> yi;
    double mintime = INT_MAX;
    int index = 0;
    double studenttime= 0;
    FOR(i, 1, n)
    {
        double time = calculate(stop[i]);


        if (time < mintime)
        {
            mintime = time;
            studenttime =dist(stop[i], 0 , xi,yi);
            index = i + 1;
            
        }
        else if ( time == mintime )
        {
            if (studenttime > dist(stop[i], 0 , xi , yi ) )
            {
                  studenttime =dist(stop[i], 0 , xi,yi);
            index = i + 1;

            }
            
        }
      
    }
      cout << index;
    return 0;
}