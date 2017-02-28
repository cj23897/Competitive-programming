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
bool compare(pair<string, string> a, pair<string, string> b)
{
	if(a.first > b.first)
		return false;
	else
		return true;
}
void solve()
{
	int n;
	cin >> n;
	vector<pair<string, string> > vec,temp;
	string a,b;
	iloop(0,n)
	{
		cin >> a >> b;
		vec.pb(mp(a,b));
	}	
	int arr[n];
	iloop(0,n)
		cin >> arr[i];
	iloop(0,n)
	{
		string t1 = vec[arr[i]-1].first, t2 = vec[arr[i]-1].second;
		temp.pb(mp(t1, t2));
	}
	string min1, min2;
	min1 = min(temp[0].first, temp[0].second);
	iloop(1,n)
	{

		if(temp[i].second > min1 || temp[i].first > min1)
		{
			int c = 0;
			min2 = min1;
			if(temp[i].first > min2)
			{
				++c;
				min1 = temp[i].first;
			}
			if(temp[i].second > min2)
			{
				if(c != 0)
				min1 = min(min1,temp[i].second);
				else
					min1 = temp[i].second;
			}
		}
		else
		{
			cout << "NO\n";
			return;
		}
	}
	cout << "YES\n";
	return;
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