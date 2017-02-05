#include <iostream>
#include <cstdio>
using namespace std;
void fastscan(long &x)
    {
        bool neg=false;
        register int c;
        x =0;
        c=getchar();
        if(c=='-')
        {
            neg = true;
            c=getchar();
        }
        for(;(c>47 && c<58);c=getchar())
            x = (x<<1) + (x<<3) +c -48;
        if(neg)
            x *=-1;
    }
int main()
{
	std::ios::sync_with_stdio(false);
	long n,m,k;
	fastscan(n);
	fastscan(m);
	fastscan(k);
	long long arr[n][m];
	std::fill(arr[0], arr[0] + n * m, 0);
	/*for(long i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			arr[i][j] = 0;
		}
	}*/
	for(long i = 0; i < k; ++i)
	{
		long number, x, y;
		fastscan(number);
		fastscan(x);
		fastscan(y);
		if(number == 1)
		{
			for(long j = 0; j < m; ++j)
			{
				arr[x-1][j] = y;
			}
		}
		else
		{
			for(long j = 0; j < n; ++j)
			{
				arr[j][x-1] = y;
			}
		}
	}
	for(long i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}