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
	long long n, s, t, p = 0;
	cin >> n >> s >> t;
	vector< long long>v(n + 1);
	for (long long i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	while (s != t && v[s] != 0)
	{
		int temp = v[s];
		v[s] = 0;
		s = temp;
		p++;
	}
	cout << ((s == t) ? p : -1);
}