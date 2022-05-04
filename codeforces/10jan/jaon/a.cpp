#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
#define all(n) n.begin(),n.end()
#define N 100005
string s[N], ss[N];
int solve()
{
	int n,k;
	cin>>n>>k;
	getline(cin, s[0]);
	forn(i, 3*n)
	{
		getline(cin, s[i]);
	}
	vector<int> cnt(3*n);
	map<string, int> mp;
	for(int i=3*n-1;i>=0;i--)
	{
		if(mp.find(s[i])!=mp.end())
		{
		}
		else
		{
		mp[s[i]] = mp.size();
		ss[mp.size()-1] = s[i];
		}
		cnt[mp[s[i]]]++;
	}
	vector<pair<int, int> > vc;
	for(int i=0;i<3*n;i++)
	{
		vc.push_back({cnt[i], -i});
	}
	sort(all(vc));
	reverse(all(vc));
	for(int i=0;i<k;i++)
	{
		if(vc[i].first==0)
			break;
		cout<<ss[-vc[i].second]<<"\n";
	}
	return 0;
}
int main()
{
	{
		solve();
	}
}