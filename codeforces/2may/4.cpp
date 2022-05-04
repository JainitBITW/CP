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
ll m, n, q;

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int flag=0;
        int count = 0;
        int count1 = 0;
        int temp;
        FOR(i, 0, n)
        {
            cin >> m;
            if (i == 0){
                temp=m;
                
                continue;}
            if (m >= temp)
                count++;
            else
                count = 0;

            if (m <= temp)
                count1++;
            else
                count1 = 0;

            if (count == 2 || count1==2)
            {
                
                flag=1;
                cout << "NO";

                break;
            }
            temp=   m;;
        }
        if(!flag)
        {
            cout<<"YES";
            
        }
        nl;
    }
    return 0;
}