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

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;
    while (t--)
    {
        cin >> n >> m;
        deque<int> deq;

        vpi ans;

        FOR(i, 0, n)
        {
            int a;
            cin >> a;
            deq.push_back(a);
        }
        FOR(i, 0, 2 * n)
        {
            int t1 = deq.front();
            deq.pop_front();
            int t2 = deq.front();
            deq.pop_front();
            ans.PB({t1, t2});
            if (t1 > t2)
            {
                deq.push_front(t1);
                deq.push_back(t2);
            }
            else
            {
                deq.push_front(t2);
                deq.push_back(t1);
            }
        }

        while (m--)
        {
            cin >> q;
            q--;
            if (q < n)
            {
                cout << ans[q].F << " " << ans[q].S;
            }
            else
            {
                q++ ; 
                q%=(n-1);
                
              

                cout << ans[q + n-2].F << " " << ans[q + n-2].S;
            }
            nl;
        }
    }
    return 0;
}