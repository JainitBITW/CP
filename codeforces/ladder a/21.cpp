#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, n) for (int i = a; i < n; i++)
#define FOK(i, a, n) for (int i = n; i > a; i--)
#define JALDI ios_base::sync_with_stdio(false);
#define jaldi cin.tie(NULL);
#define F first
#define S second
typedef long long ll;

int N;
 
int main()
{
  cin>>N;
  
    if (!N){cout<<("O-|-OOOO"); return 0; }
    for (;N;N/=10){

        int n = N%10;

        cout<<(n>=5?"-O|":"O-|"); if (n >= 5) n -= 5;

        for (int i=0;i<n;i++) printf("O"); printf("-");
        
        for (int i=0;i<4-n;i++) printf("O"); cout<<endl;
    }
}
