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

        int n;
    cin >> n;
    string s;
    int X = 0;
    for(;n--;)
    {
        cin >> s;
        if (s == "++X")
            ++X;
        if (s == "--X")
            --X;
        if (s == "X++")
            X++;
        if (s == "X--")
            X--;
    }
    cout<<X;



    return 0;
}