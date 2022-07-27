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
#define MAX 100001
#define INF INT_MAX
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;
vector<pair<int, int>> g[MAX];
int visited[MAX];
ll distancess[MAX];
int parent[MAX];

void djix(int a)
{
    set<pair<int, int>> s;
    int count=0;

    s.insert({0, a});
    while (s.size() > 0)
    {
        auto f = *s.begin();
        int ve = f.S;
        int dist = f.F;
        if (visited[ve])
        {
            s.erase(s.begin());
            continue;
        }
        visited[ve] = 1;
        count ++;
        for (auto &el : g[ve])
        {
            if( visited[el.first])continue;
            int nod = el.F;
            int new_dis = el.S;
            if (dist + new_dis < distancess[nod])
            {
                distancess[nod] = dist + new_dis;
                parent[nod] = ve;
                s.insert({distancess[nod], nod});
            }
        }
        
    }
}

int main()
{
    // freopen (file".in", "r", stdin);
    // freopen (file".out", "w", stdout);
    JALDI jaldi

        int t = 1;
    //   cin>>t;

    FOR( i , 0 , MAX)distancess[i]=INF;
    while (t--)
    {
        cin >> n >> m;

        FOR(i, 0, m)
        {
            int a, c, b;
            cin >> a >> b >> c;
            g[b].PB({a, c});
            g[a].PB({b, c});
        }

        djix(1);
        if (distancess[n] == INF)
        {
            cout << -1;
            return 0;
        }
        vi ans;
        int cuparent = n;
        while (cuparent != 1)
        {
            ans.PB(cuparent);
            cuparent = parent[cuparent];
        }
        // FOR( i , 1 , n+1 )cout<<" "<<parent[i];
        ans.PB(1);
        for (int i = ans.size() - 1; i >= 0; i--)
        {
            cout << ans[i] << " ";
        }
    }
    return 0;
}