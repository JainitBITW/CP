#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
typedef long long  ll; 


int main()
{
JALDI jaldi 

int array[5][5], a, b;
FOR(i , 0 , 5 )
{
    FOR(j , 0 , 5)
    {
        cin>>array[i][j];
        if (array[i][j]==1)
        {
            a= i ;
            b= j ;


        }

    }
}
cout<< abs(2-a)+abs(2-b);



    return 0; 
}