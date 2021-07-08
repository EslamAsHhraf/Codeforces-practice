# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
//# include<map>
# include<set>
//# include<list>
//#include <numeric> 

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;
	multiset<long long int>a;
	for (int i = 0; i < n; i++)
	{
		int q;
		cin >> q;
		a.insert(q);
	}
	long long int sum = 0;
	for (auto a : a)
	{
		sum += a * x;
		x = (x > 1) ? x - 1 : x;
	}
	cout << sum;
}