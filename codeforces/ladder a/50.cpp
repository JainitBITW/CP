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
bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.S > b.S;
}

int main()
{
    JALDI jaldi

            cin >>
        n;
    string s;
    map<string, int> m;
    while (n--)
    {
        cin >> s;
        m[s]++;
    }

    vector<pair<string, int>> v;
    for(auto &ele: m)
    {
        v.push_back(ele);
    }
    sort(v.begin(), v.end(), cmp);

    cout<<(*v.begin()).F;

    return 0;
}