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
bool compare(pair<int, int> a, pair<int, int> b)
{
	if(a.first >= b.first)
		return false;
	else
		return true;
}
void solve()
{
	int n,k;
	cin >> n >> k;
	int arr[n],brr[n];
	vector<pair<int, int> > vec;
	iloop(0,n)
	{
		cin >> arr[i];
	}
	iloop(0,n)
	{
		cin >> brr[i];
	}
	iloop(0,n)
	{
		vec.pb(mp(arr[i], brr[i]));
	}
	sort(vec.begin(), vec.end(), compare);
	int len = vec.size(), sum = 0, sum1 = 0;
	bool comp = false;
	int temp = k;
	iloop(0,len)
	{
		if(len-i <= k)
		{
			comp = true;
		}
		if(comp)
		{
			sum += vec[i].first;
			--k;
		}
		else if(vec[i].first <= vec[i].second)
		{
			--k;
			sum += vec[i].first;
		}
		else
		{
			sum += vec[i].second;
		}
	}
	iloop(0,n)
	{
		if(i+1 <= temp)
		{
			comp = true;
		}
		else
		{
			comp = false;
		}
		if(comp)
		{
			sum1 += vec[i].first;
		}
		else if(vec[i].first <= vec[i].second)
		{
			sum1 += vec[i].first;
		}
		else
		{
			sum1 += vec[i].second;
		}
	}
	(sum > sum1)?cout << sum1 << "\n":cout << sum << "\n";
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