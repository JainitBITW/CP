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
string p,q; 
cin>>p>>q;
int ct1=0 , ct=0 ;


while ( ct<q.size() && ct1<p.size())
{

    if( p[ct1]==q[ct])
    {
        ct1++;


    }
    ct++;

}

cout<<ct1+1;






    return 0; 
}