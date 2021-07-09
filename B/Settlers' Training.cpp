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
	long long  n, k;
	cin >> n >> k;
	map<long long, long long>m;
	for (long long i = 1; i <= n; i++)
	{
		long long aa;
		cin >> aa;
		m[aa]++;
	}
	long long count = 0;
	while (m[k] != n)
	{
		map<long long, long long>m2;
		for (auto i = m.begin(); i != m.end(); i++)
		{
			if (i->second != 0 && i->first!=k)
			{
				i->second--;
				m2[i->first + 1]++;
            }
		}
		for (auto i = m2.begin(); i!= m2.end(); i++)
		{
			m[i->first] += i->second;
		}
		m2.erase(m2.begin(),m2.end());
		count++;
	}
	cout << count;
}