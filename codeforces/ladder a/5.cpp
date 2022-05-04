#include<bits/stdc++.h>

using namespace std; 

 
int main()
{

string s , r ; 
cin>>s >> r; 
for (int i = 0; i <s.size(); i++)
{
    if ( s[i]>='A'&&s[i]<='Z')
    {
        s[i]+=32;

    }
}
for (int i = 0; i < r.size(); i++)
{
    if ( r[i]>='A'&&r[i]<='Z')
    {
        r[i]+=32;
        
    }
}

if ( s==r)
{
    cout<<0; 

}
else if( s.compare(r)>0  )
{
    cout<< 1;
}
else 
{
    cout<< -1;
}
    return 0; 
}