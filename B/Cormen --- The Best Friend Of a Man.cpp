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
	long long m, n, count = 0;
	cin >> n >> m;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	for (int i = 0; i < v.size() - 1; i++)
	{
		if (v[i] + v[i + 1] < m)
		{
			count += m - v[i] - v[i + 1];
			v[i + 1] += m - v[i] - v[i + 1];
		}
	}
	cout << count << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
}