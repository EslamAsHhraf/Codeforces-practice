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
	vector<pair<long long, long long >>v;
	for (long long i = 1; i <= 50; i++)
	{
		v.push_back(make_pair(pow(2, i - 1), pow(2, i)));
	}
	for (long long i = 0; i <= 49; i++)
	{
		if ((k - v[i].first) % v[i].second == 0)
		{
			cout << i + 1;
			break;
		}
	}
}