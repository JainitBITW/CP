#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v(n, 0);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        m[v[i]]++;   
    }

    unordered_map<int, int>::iterator i;

    i = m.begin();

    while (i != m.end())
    {
        if (i->second == 1)
        {
            cout << -1 << endl;
            return;
        }
        i++;
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--) solve();
}