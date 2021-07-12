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
	long long  n,num=0;
	cin >> n;
	vector<long long >v(n);
	cin >> v[0];
	num += abs(v[0]);
	for (long long i = 1; i < n; i++)
	{
		cin >> v[i];
		num += abs(v[i] - v[i - 1]);
	}
	cout << num;

}