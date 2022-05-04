#include<bits/stdc++.h>

using namespace std; 

 
int main()
{
int n ; 
cin>> n ; 
vector<pair < int, int>> v(n);
for (int i = 0; i < n; i++)
{
    v[i].second= i + 1 ; 
    cin>> v[i].first; 

}
sort(v.begin(), v.end());
for (int i = 0; i < n; i++)
{
    cout<< v[i].second <<" ";
}



    return 0; 
}