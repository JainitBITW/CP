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

int main()
{
    JALDI jaldi

        map<char, int>
            m;
    FOR(i, 0, 26)
    {
        m['a' + i] = 0;
    }
    cin >> n;

    int ct=0 ;
    FOR(i, 0, n - 1)
    {
        char a, b;
        cin >> a >> b;
        m[a]++;
        if (m[b - 'A' + 'a'] == 0)
            ct++;
        else
            m[b - 'A' + 'a']--;
    }
    cout<<ct; 
    return 0;
}