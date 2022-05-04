#include<bits/stdc++.h>

using namespace std; 

 
int main()
{
    int t,ans; 
    cin>>t; 
    while (t--){
vector<int> v; 
int n ; 
cin>>n;
for (int i = 0; i < n; i++)
{
    int a; 
    cin>>a; 
    v.push_back(a);

}
ans= (*max_element(v.begin(), v.end())) - (*min_element(v.begin(), v.end()));
cout<<ans <<endl ; 

    }



    return 0; 
}