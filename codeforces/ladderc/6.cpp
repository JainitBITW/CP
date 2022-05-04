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
#define ALL(container) (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) ((int)container.size())
char c;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<pair<int, int>> vpi;
ll m, n, q;

int bintodec(int n)
{
	int p = 1;
	int x = 0;
	while (n > 0)
	{
		x += (n % 2) * p;
		p *= 10;
		n /= 2;
	}
	return x;
}
int main()
{
	// freopen (file".in", "r", stdin);
	// freopen (file".out", "w", stdout);
	JALDI jaldi

		int t = 1;
	//   cin>>t;
	while (t--)
	{
		cin>>n; 
		int x = 1;
		int ans = 0;
		while (bintodec(x) <= n)
		{
	
			ans++;
			x++;
		}
		cout << ans;
		nl;
	}
	return 0;
}