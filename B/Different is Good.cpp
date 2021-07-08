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
	int n, sum = 0;
	cin >> n;
	map<char, int>v;
	for (int i = 0; i < n; i++)
	{
		char a;
		cin >> a;
		v[a]++;
	}
	int x = v.size();
	for (auto it = v.begin(); it != v.end(); it++)
	{
		sum += it->second - 1;
		if (sum > 26 - x)
		{
			cout << -1;
			return 0;
		}
	}
	cout << sum;
}