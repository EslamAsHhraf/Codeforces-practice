# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
# include<map>
# include<set>
#include<stack>
//# include<list>
//#include <numeric> 
using namespace std;
int main()
{
	long long n, m, count = 1, o = 0;
	cin >> n >> m;
	vector<char>v(n*m);
	vector<bool>b(n*m);
	for (int i = 0; i < n*m; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < n*m; i++)
	{
		for (int j = i + 1; (j) % m != 0; j++)
		{
			if (v[i] == v[j])
			{
				b[i] = true;
				b[j] = true;
				break;
			}
		}
		for (int j = i + m; j < n*m; j = j + m)
		{
			if (v[i] == v[j])
			{
				b[i] = true;
				b[j] = true;
				break;
			}
		}
	}

	for (int i = 0; i < n*m; i++)
	{
		if (!b[i])
			cout << v[i];

	}

}