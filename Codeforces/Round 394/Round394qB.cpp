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
	int n,l;
	cin >> n >> l;
	vector<int> arr,brr,c,d;
	iloop(0,n)
	{
		int x;
		cin >> x;
		arr.pb(x);
	}
	iloop(0,n)
	{
		int x;
		cin >> x;
		brr.pb(x);
	}
	iloop(1,n)
	{
		int x = arr[i]-arr[i-1];
		int y = brr[i]-brr[i-1];
		c.pb(x);
		d.pb(y);
	}
	int a = l-arr[n-1]+arr[0];
	int b = l-brr[n-1]+brr[0];
	c.pb(a);
	d.pb(b);
	iloop(n,2*n)
	{
		c.pb(c[i-n]);
	}
	iloop(0,n)
	{
		vector<int> temp(c.begin() + i,c.begin()+i+n);
		if(temp == d)
		{
			cout << "YES\n";
			return;
		}
	}
	cout << "NO\n";
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