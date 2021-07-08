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
	map<char, long long>c;
	for (long long i = 0; i < s.length(); i++)
	{
		c[s[i]]++;
	}
	int x = c['x'] - c['y'];
	if (x > 0)
	{
		for (int i = 0; i < x; i++)
		{
			cout << "x";
		}
	}
	else if (x < 0)
	{
		x *= -1;
		for (int i = 0; i < x; i++)
		{
			cout << "y";
		}
	}
}