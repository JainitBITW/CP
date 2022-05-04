#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;
int m, n, a, b, p, q;

int main()
{
    JALDI jaldi

        set<char>
            s;

    while (1)
    {
        char a;
        cin >> a;
        if (a <= 'z' && a >= 'a')
            s.insert(a);

        if (a == '}')
            break;
    }
    cout<<s.size();
    

    return 0;
}