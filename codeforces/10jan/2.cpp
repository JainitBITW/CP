#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;
        
        if (a == b && a == c)
        {
            cout << "YES\n";
            continue;
        }
        if ( 2*b == a+c )
        {

            cout << "YES\n";
            continue;
        }
        
        if (2 * b < a + c)
        {
            if ((a + c) % (2 * b) == 0)
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";

            continue;
        }
        else 
        {
            if ( 2*b -c  >0      &&  (2*b -c )%a == 0 )
            {
                 cout << "YES\n";
            continue;
            }
            else if (2*b -a >0      &&  (2*b -a )%c == 0 )
            {

                 cout << "YES\n";
            continue;
            }
            else 
            {
                cout<<"NO\n";
            }



        }


    }

    return 0;
}