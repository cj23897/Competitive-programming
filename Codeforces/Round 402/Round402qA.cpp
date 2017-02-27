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
	int arr[n],brr[n];
	int temp[6],temp1[6], sum = 0;
	memset(temp,0,sizeof(temp));
	memset(temp1,0,sizeof(temp1));
	iloop(0,n)
	{
		cin >> arr[i];
		temp[arr[i]]++;
	}
	iloop(0,n)
	{
		cin >> brr[i];
		temp1[brr[i]]++;
	}
	iloop(0,6)
	{
		if((temp1[i]+temp[i])%2 != 0)
		{
			cout << "-1\n";
			return;
		}
	}
		sum = 0;
		iloop(0,6)
		{
			sum += abs(temp1[i]-temp[i]);
		}
		cout << sum/4 << "\n";
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