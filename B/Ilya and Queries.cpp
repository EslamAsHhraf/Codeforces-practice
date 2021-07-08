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
	string s;
	long long n, m, count = 0;
	cin >> s;
	vector<long long>b(s.length());
	for (int i = 1; i < s.length(); i++)
	{
		if (i != 0)
		{
			if (s[i] == s[i - 1])
			{
				b[i] += 1 + b[i - 1];
			}
			else
			{
				b[i] += b[i - 1];
			}
		}
	}
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)
	{
		long long x, y;
		cin >> x >> y;
		cout << b[y - 1] - b[x - 1] << endl;
	}
}