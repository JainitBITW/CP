#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
typedef long long ll;

int main()
{
    JALDI jaldi  long long  int array[3];
    FOR(i, 0, 3)
    {
        array[i] = 0;
    }

    int n;
    cin >> n;
    FOR(i, 0, n)
    {
        int a;
        cin >> a;
        array[i % 3] += a;
    }
    int index = max_element(array , array+3 ) - array;

    switch (index)
    {
    case 0:
        cout << "chest";
        break;

    case 1:
        cout << "biceps";
        break;

    case 2:
        cout << "back";
        break;
    }

    return 0;
}