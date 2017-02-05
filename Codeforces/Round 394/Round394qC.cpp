#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1e9 + 7
#define ull unsigned long long
#define iloop(a,b) for(ll i = a; i < b; ++i)
#define jloop(a,b) for(ll j = a; j < b; ++j)
#define kloop(a,b) for(ll k = a; k < b; ++k)
using namespace std;
void solve()
{
	int n,m;
	cin >> n >> m;
	char c[n][m];
	iloop(0,n)
	{
		jloop(0,m)
		{
			cin >> c[i][j];
		}
	}
	int temp[n][3];
	iloop(0,n)
	{
		jloop(0,3)
		{
			temp[i][j] = INT_MAX;
		}
	}
	iloop(0,n)
	{
		int p1 = 10000,p2 = 10000,p3 = 10000;
		jloop(0,m)
		{
			if(c[i][j] == '#' || c[i][j] == '&' || c[i][j] == '*')
			{
				if(j < p3)
					p3 = j;
				if(m-j < p3)
					p3 = m-j;
			}
			else if(c[i][j] >= '0' && c[i][j] <= '9')
			{
				if(j < p1)
					p1 = j;
				if(m-j < p1)
					p1 = m-j;
			}
			else
			{
				if(j < p2)
					p2 = j;
				if(m-j < p2)
					p2 = m-j;
			}
		}
		temp[i][0] = p1;
		temp[i][1] = p2;
		temp[i][2] = p3;	
	}
	int sum = INT_MAX;
	int min1 = INT_MAX,ans1 = 0;
	jloop(0,n)
	{
		iloop(0,n)
		{
			kloop(0,n)
			{
				ans1 = temp[j][0] + temp[i][1] + temp[k][2];
				if(i == k || j == k || i == j)
					ans1 = INT_MAX;
				sum = min(sum,ans1);
			}
		}
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