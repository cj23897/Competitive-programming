#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define MOD 1e9 + 7
#define ull unsigned long long
#define iloop(a,b) for(ll i = a; i < b; ++i)
#define jloop(a,b) for(ll j = a; j < b; ++j)
using namespace std;
int main()
{
	string s;
	//freopen("test.txt","rt",stdin);
	int n,m;
	cin >> n >> m;
	if(n-m >= 2)
		cout << "-1\n";
	else if(n == 1 && m > 4)
	{
		cout << "-1\n";
		return 0;
	}
	else if(m > (n+1)*2)
	{
		cout << "-1\n";
		return 0;
	}
	else
	{
		int t = n;
		iloop(0,t)
		{	
			if(n == 0)
			{
				s += "11";
				m-=2;
			}
			else if(m >= 2*n)
			{
				s += "110";
				m-=2;
				n--;
			}
			else
			{
				if(m > n)
				{
					if(m != 0 && n != 0)
					{
						s += "10";
						m--;
						n--;
					}
					else if(m == 0)
					{
						s += "0";
						n--;
					}
					else if(n == 0)
					{
						s += "1";
						m--;
					}
				}
				else
				{
					if(m != 0 && n != 0)
					{
						s += "01";
						m--;
						n--;
					}
					else if(m == 0)
					{
						s += "0";
						n--;
					}
					else if(n == 0)
					{
						s += "1";
						m--;
					}
				}
			}
		}
		if(m == 1)
			s += "1";
		else if(m == 2)
			s += "11";
	}
	cout << s << "\n";
}