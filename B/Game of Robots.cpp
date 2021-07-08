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
	long long n, k, count = 1, o = 0;
	cin >> n >> k;
	vector< long long>m(n);
	vector< long long>range(n);
	for (long long i = 0; i < n; i++)
	{
		count = count + o;
		range[i] = count;
		cin >> m[i];
		o++;
	}
	auto loc2 = lower_bound(range.begin(), range.end(), k);
	if (loc2 == range.end())
		loc2 = range.end();
	if (*loc2 > k)
		loc2--;
	cout << m[k - *loc2];
}