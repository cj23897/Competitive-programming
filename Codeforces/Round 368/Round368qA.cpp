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
	int n,m;
	cin >> n >> m;
	char c;
	iloop(0,n)
	{
		jloop(0,m)
		{
			cin >> c;
			if(c == 'C' || c == 'M' || c == 'Y')
			{
				cout << "#Color\n";
				return;
			}
		}
	}
	cout << "#Black&White\n";
	return;
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