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

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.F > b.F;
}
int main()
{
    JALDI jaldi

        vector<pair<int, int>>
            v;
    vector<pair<int, int>> w;
    cin >> n;
    ll fct = 0;
    FOR(i, 0, n)
    {
        cin >> m >> q;
        if (m > 0)
            v.PB(MP(m, q));

        else
            w.PB(MP(m, q));
    }

    sort(v.begin(), v.end());
    sort(w.begin(), w.end(), cmp);

    if (v.size() > w.size())
    {
        for (int i = 0; i < w.size(); i++)
            fct += (v[i].S + w[i].S);

        fct = fct + v[w.size()].S;
    }

    else if (v.size() < w.size())
    {
        for (int i = 0; i < v.size(); i++)
            fct += (v[i].S + w[i].S);

        fct = fct + w[v.size()].S;
    }

    else
    {
        for (int i = 0; i < v.size(); i++)
            fct += (v[i].S + w[i].S);
    }

    cout << fct;
    return 0;
}