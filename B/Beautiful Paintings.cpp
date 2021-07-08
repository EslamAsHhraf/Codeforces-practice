# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
# include<map>
# include<set>
//# include<list>
//#include <numeric> 
using namespace std;
int main()
{
	long long n, m, count = 0;
	cin >> n;
	map<long long, long long>v;
	for (int i = 0; i < n; i++)
	{
		long long aa;
		cin >> aa;
		v[aa]++;
	}
	long long temp = 0;
	while (v.size() != 1 && v.size() != 0)
	{
		temp = 0;
		for (auto it = v.begin(); it != v.end(); it++)
		{
			if (it->second != 0)
			{
				temp++;
				it->second--;
			}
		}
		if (temp == 1 || temp == 0)
		{
			break;
		}
		else
		{
			count += temp - 1;
		}
	}
	cout << count;
}