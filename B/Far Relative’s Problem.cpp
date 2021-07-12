//# include<iostream>
//#include <stdio.h>
////# include<string>
//# include<string>
//# include<string.h>
//#include <algorithm>
//# include<vector>
////# include<map>
//# include<set>
//# include<list>
//#include <numeric> 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long  n, M=0,F=0,Max=0;
	cin >> n;
	multimap<char, pair<long long, long long>>m;
	for (long long i = 1; i <= n; i++)
	{
		long long aa, bb;
		char cc;
		cin >>cc>>aa >> bb;
		m.insert({cc, make_pair(aa, bb)});
	}
	for (int i = 1; i <= 366; i++)
	{
		F = 0; M = 0;
		for (auto j = m.begin(); j != m.end(); j++)
		{
			if (i >= j->second.first && i <= j->second.second)
			{
				if (j->first == 'M')
					M++;
				else
					F++;
			}
		}
		Max = max(Max, 2 * min(M, F));
	}
	cout << Max;

}