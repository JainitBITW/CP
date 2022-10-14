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
typedef pair<ll, ll> pll;
typedef vector<pair<int, int>> vpi;
const ll MOD = 1000000007;
ll m, n, q;
set<string> se;
void powerSet(string str, int index = -1, string curr = "")
{
    if( se.find(str) != se.end())
    {
        return;
    }
    int n = str.length();
 
    // base case
    if (index == n)
        return;
 
    // First print current subset
    se.insert(curr);
 
    // Try appending remaining characters
    // to current subset
    for (int i = index + 1; i < n; i++) {
 
        curr += str[i];
        powerSet(str, i, curr);
 
        // Once all subsets beginning with
        // initial "curr" are printed, remove
        // last character to consider a different
        // prefix of subsets.
        curr.erase(curr.size() - 1);
    }
    return;
}
vector<int> solve(int N, vector<string> &S, int Q, vector<string> &Query)
{

 
    vector<string> re(N);

    FOR(i, 0, N)
    {
        vi v(21);
        string s="";

        FOR(j, 0, S[i].size())
        {
            v[S[i][j] - 'a']++;
        }
        FOR(j , 0 , 20)
        {
            if( v[j])
            {
                s.PB('a'+j);

            }
        }
        re[i]=s;
    }
    vector<int> ans;

    FOR(i, 0, Q)
    {
        int y = 0;
        vi w;
        FOR(j, 0, Query[i].size())
        {
            w.PB(Query[i][j] - 'a');
        }
        FOR(j, 0, N)
        {
            int x = 0;
            for (auto &el : w)
            {
                if (v[j][el] == 0)
                {
                    x = 1;
                    break;
                }
            }
            if (x)
                continue;
            else
            {
                y = 1;
                ans.PB(j);
                break;
            }
        }
        if (y == 0)
        {
            ans.PB(-1);
        }
    }
    return ans;
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
        vector<string> S = {"bba", "aabc", "def"};
        {
            vector<string> Q = {"ab"};
            vi v = solve(3, S, 1, Q);
            for (auto &el : v)
            {
                cout << el << " ";
            }
        }
        return 0;
    }
}
