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
	int n,k;
	cin >> n >> k;
	int arr[n], sum = 0;
	iloop(0,n)
	{
		cin >> arr[i];
	}	
	sort(arr, arr + n);
	while(k > 0)
	{
		int c = 0;
		for(int i = n-1; i >= 0; --i)
		{
			int temp = arr[i];
			int last = arr[i]%10;
			if(k <= 0)
			{
				break;
			}
			if(100-last <= k && temp + 100-last <= 100)
			{
				++c;
				arr[i]+=100-last;
				k-=100-last;
			}
			else if(10-last <= k && temp + 10-last <= 100)
			{
				++c;
				arr[i] += 10-last;
			k -= 10-last;
			}
		}
		if(c == 0)
		{
			break;
		}
	}
	iloop(0,n)
	{
		//cout << arr[i] << " ";
		sum += arr[i]/10;
	}
	cout << sum << "\n";
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