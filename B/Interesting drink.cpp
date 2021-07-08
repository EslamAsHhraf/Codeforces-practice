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
	long long n, m, q;
	cin >> n;
	vector< long long>v(n);
	for (long long i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cin >> q;
	for (long long i = 1; i <= q; i++)
	{
		cin >> m;
		auto it1 = lower_bound(v.begin(), v.end(), m);
		auto it2 = upper_bound(v.begin(), v.end(), m);
		if (it2 == v.end())
		{
			cout << n << endl;
		}
		else if (*it1 == *it2)
		{
			cout << (it2 - v.begin()) << endl;
		}
		else
		{
			cout << (it2 - v.begin()) << endl;
		}
	}

}