#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1e9 + 7
#define ull unsigned long long
#define iloop(a,b) for(ll i = a; i < b; ++i)
#define jloop(a,b) for(ll j = a; j < b; ++j)
using namespace std;
void solve()
{
	int n,m,k,u,v;
	ll l;
	cin >> n >> m >> k;
	list<ll> lis[n],weight[n];
	ll min = 10000000000;
	bool mark[n];
	memset(mark,false,sizeof(mark));
	iloop(0,m)
	{
		cin >> u >> v >> l;
		u--;
		v--;
		lis[u].pb(v);
		lis[v].pb(u);
		weight[u].pb(l);
		weight[v].pb(l);
	}	
	iloop(0,k)
	{
		int j;
		cin >> j;
		mark[j-1] = true;
	}
	iloop(0,n)
	{
		if(mark[i])
		{
			list<ll>::iterator itr;
			list<ll>::iterator ls;
			for(itr = weight[i].begin(), ls = lis[i].begin(); itr != weight[i].end(), ls != lis[i].end(); ++itr, ls++)
			{
				if(*itr < min && mark[*ls] == false)
					min = *itr;
			}
		}
	}
	if(min != 10000000000)
	cout << min << "\n";
	else
		cout << "-1\n";
}
int main()
{
	bool testing = false;
	std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	if(testing)
	{
		freopen("test.txt","rt",stdin);
	}
	if(testing)
	{
		int start = clock();
		solve();
		int end = clock();
		cout << "time: " << (end - start)/(double)(CLOCKS_PER_SEC)*1000 << " milliseconds\n";
	}
	else
	{
		solve();
	}
}