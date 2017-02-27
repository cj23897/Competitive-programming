#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1e9 + 7
#define ull unsigned long long
#define iloop(a,b) for(ll i = a; i < b; ++i)
#define jloop(a,b) for(ll j = a; j < b; ++j)
using namespace std;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end())
void solve()
{
	int n;
	cin >> n;
	ll arr[n];
	arr[0] = 0;
	ll dp[n+1];
	ll dp1[n+1];
	iloop(1,n+1)
	{
		cin >> arr[i];
	}
	int m, num,l,r;
	cin >> m;
	dp[0] = 0, dp1[0] = 0;
	for(int i = 1; i <= n; ++i)
	{
		dp[i] = dp[i-1] + arr[i];
	}
	sort(arr, arr + n+1);
	for(int i = 1; i <= n; ++i)
	{
		dp1[i] = dp1[i-1] + arr[i];
	}
	iloop(0,m)
	{
		cin >> num >> l >> r;
		if(num == 1)
			cout << dp[r] - dp[l-1] << "\n";
		else
			cout << dp1[r] - dp1[l-1] << "\n";
	}
}
int main()
{
	bool testing = false;
	/*std::ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);*/
	if(testing)
	{
		freopen("test.txt","rt",stdin);
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