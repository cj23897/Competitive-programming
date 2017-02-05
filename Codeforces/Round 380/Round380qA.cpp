#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	long long arr[n], brr[n], ans1 = 0, ans2 = 0, max = 0;
	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	for(int i = 0; i < n; ++i)
	{
		cin >> brr[i];
	}
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < n; ++j)
		{
			ans2 = 0;
			ans1 = 0;
			for(int k = i; k <= j; ++k)
			{
				ans1 = ans1 | arr[k];
				ans2 = ans2 | brr[k];
			}
			if(ans2 + ans1 > max)
			{
				max = ans1 + ans2;
				//cout << i + 1 << " " << j + 1 << endl;
			}
		}
	}
	cout << max << endl;
}