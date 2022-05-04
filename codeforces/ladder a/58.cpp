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

bool vowel(char c)
{
    return ((c == 'a') || (c == 'u') || (c == 'o') || (c == 'i') || (c == 'e') || (c == 'y'));
}

int main()
{
    JALDI jaldi

        string a;
    cin >> a;
    FOR(i, 0, a.size())
    a[i] |= ' ';

    FOR(i, 0, a.size())
    {
        
        if (vowel(a[i]))
        {
            continue;
        }

        else
        {
            cout<<"."<<a[i];
        }

    }
     

    return 0;
}