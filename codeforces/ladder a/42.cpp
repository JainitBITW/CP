#include<bits/stdc++.h>
using namespace std;
#define  FOR(i,a,n) for (int i =a ; i<n ;i++)
#define  FOK(i,a,n) for (int i =n ; i>a ;i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first  
#define  S second 
#define  nl cout<<endl 
char c;
typedef long long  ll; 
int m , n , q;


int main()
{
JALDI jaldi 

string s; 
cin>>s; 
int index = s.find('^');
ll left = 0 , right= 0 ;

for (int i = 0 ; i<index ;i++)
{
    if ( s[i]>='0'&&s[i]<='9')
    {
        left = left + (s[i]-'0')*(index - i);
    }

}
for (int i = index ; i<s.size() ;i++)
{
    if ( s[i]>='0'&&s[i]<='9')
    {
        right = right + (s[i]-'0')*(i - index);
    }

}

if ( left > right )
{
    cout<<"left";
}

else if ( right>left )
{
    cout <<"right";
}
else cout<<"balance";



    return 0; 
}
