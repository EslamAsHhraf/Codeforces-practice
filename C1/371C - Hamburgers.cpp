# include<iostream>
//# include<string>
# include<string>
//#include <algorithm>
//# include<vector>
//# include<map>
//# include<set>
//# include<list>
//#include <numeric> 
 
using namespace std;
bool ok(long long* n, long long* h, double k, long long x, long long* num)
{
	double s = k;
	for (int i = 0; i <3; i++)
	{
		long long e = h[i] -  x*num[i];

		if (e >= 0)
		{
			continue;
		}
		else if (s >= abs(e)*n[i])
		{
			s -= abs(e)*n[i];
			continue;

		}
		return 0;
	}
	return 1;
}

int main()
{

	char str[110];
	//string s;
	cin >> str;
	long long num[3];

	long long a[3], b[3];
long long k,z=0, left, right;
	
	
	for (long long  i = 0; i < 3; i++)
	{
		cin >> a[i];
		num[i] = 0;
	}
	for (long long i = 0; i < 3; i++)
	{
		cin >> b[i];
	}
	cin >> k;
	
	for (long long i = 0; i <strlen(str); i++)
	{
		if (str[i] == 'B')
		{
			num[0]++;
		}
		if (str[i] == 'S')
		{
			num[1]++;
		}
		if (str[i] == 'C')
		{
			num[2]++;
		}
	}
	left = 0; right = 1e12 + 100;
	long long m;
	while (left <= right)
	{

		m = (left + right) / 2;


		if ((ok(b, a, k, m, num)))
		{
			left = m + 1;
			z = m;
		}
		else
		{
			right = m - 1;

		}

	}


	cout << z;
	
}