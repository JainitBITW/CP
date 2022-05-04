#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;

int main()
{
    JALDI jaldi
        string s;
    cin >> s;
    multiset<char> m;

    for (int i = 0; i < s.size(); i = i + 2)
    {
        m.insert(s[i]);
    }

for(auto i = m.begin(); i != --m.end(); i++ )
{
    cout<<*i<<"+";
   
}

cout<<*(--m.end());

    return 0;
}