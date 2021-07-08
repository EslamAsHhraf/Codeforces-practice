# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
# include<map>
#include<cmath>
# include<set>
#include<stack>
//# include<list>
//#include <numeric> 
using namespace std;
int main()
{
	long long n, m, count = 0;
	cin >> n >> m;
	long long target = 1000000 - m;
	if (target <= 0)
	{
		cout << 0;
		return 0;
	}
	multimap< double, long long>ma;
	for (long long i = 0; i < n; i++)
	{
		long long a, b, c;
		cin >> a >> b >> c;
		ma.insert({ (pow(a,2) + pow(b,2)),c });
	}
	for (auto it = ma.begin(); it != ma.end(); it++)
	{
		count += it->second;
		if (count >= target)
		{
			printf("%.7lf", sqrt(it->first));
			return 0;
		}
	}
	cout << -1;
}