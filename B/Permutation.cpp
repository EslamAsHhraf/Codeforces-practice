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
	map<int, int>v;
	for (int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		if (a >= 1 && a <= n)
			v[a]++;
	}
	int x = v.size();
	cout << n - x;
}