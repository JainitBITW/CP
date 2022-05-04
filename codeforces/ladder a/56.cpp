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

bool check(string s)
{
    string k = s;
    reverse(s.begin(), s.end());
    return s == k;
}

int main()
{
    JALDI jaldi

        vector<string>
            v;
    string s = "00:00";
    string t;
    cin>>t;
    bool wow = false;

    for (int i = 0; t !="23:59"; i++)
    {
       

        if (t[4] == '9')
        {
            t[4] = '0';
            if (t[3] == '5')
            {
                t[3] = '0';

                if (t[1] == '3' && t[0] == '2')
                {
                    t[1] = 0;
                    t[0] = 0;
                }
               else if (t[1] == '9')
                {
                    t[1] = '0';
                    t[0]++;
                }
               else
                {
                    t[1]++;
                }
            }
           else
            {
                t[3]++;
            }
        }
       else
        {
            t[4]++;
        }
        if (check(t))
        {
            

cout<<t;
return 0 ; 
        }

    }

// auto  u= upper_bound(v.begin(), v.end(), t);
// string x;


t= "00:00";
    


cout<<t;



    return 0;
}