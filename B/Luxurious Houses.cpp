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
	long long  n;
	cin >> n;
	stack<long long>v;
	vector<long long>vec(n);
	for (long long i = 0; i < n; i++)
	{
		long long aa;
		cin >> aa;
		v.push(aa);
	}
	long long max=v.top(),temp;
	v.pop();
	vec[n - 1]=0;
	long long loc = n - 2;
	while (!v.empty())
	{
		temp = v.top();
		v.pop();
		if (temp > max)
		{
			vec[loc] = 0;
			max = temp;
		}
		else
		{
			vec[loc] = max-temp+1;
		}
		loc--;
	}
	for (auto ti = vec.begin(); ti != vec.end(); ti++)
	{
		cout << *ti<<" ";
	}
}