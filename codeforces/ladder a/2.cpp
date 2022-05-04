#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int min = 10000;
    cin >> n;
    if (n == 2)
    {
        cout << 1 << " " << 2;
    }
    else
    {
        int a, b;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
       
            for (int j = 0 ; j < n-1; j++)
            {
                if (v[j] == v[j+1])
                {
                    a = j+ 1;
                    b = j + 2;
                    goto end;
                }
                if (abs(v[j] - v[j+1]) < min)
                {
                    min = abs(v[j+1] - v[j]);
                    a = j + 1;
                    b = j + 2;
                }
            }

            if ( abs(v[0]- v [n-1])< min )
            {
                a = 1 ;
                b= n ;
            }
        

    end:
        cout << a << " " << b;
    }

    return 0;
}