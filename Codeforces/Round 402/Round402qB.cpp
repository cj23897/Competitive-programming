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
	ll n,k;
	cin >> n >> k;
	ll temp = n;
	int arr[20], i = 0, count = 0;
	while(temp != 0)
	{
		arr[i] = temp%10;
		temp /= 10;
		i++;
	}
	if(n == 0)
	{
		cout << "0\n";
		return;
	}
	else if(i <= k+1)
	{
		ll ans = pow(10,k);
		if(n%ans != 0)
		cout << i-1 << "\n";
		else
		{
			cout << "0\n";
		}
		return;
	}
	else
	{
		jloop(0,i)
		{
			if(arr[j] != 0)
			{
				++count;
			}
			else
			{
				--k;
			}
			if(k == 0)
				break;
		}
	}
	cout << count << "\n";
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