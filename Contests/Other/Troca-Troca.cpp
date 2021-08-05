//#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include <algorithm>
#include <numeric>
#include<vector>
//#include<pia>
using namespace std;
int main()
{
	long long t, temp = 10, tt = 3;
	cin >> t;
	vector<long long >v;
	while (t >= 15)
	{
		t -= 15;
		v.push_back(1);
	}
	while (t >= 12)
	{
		t -= 12;
		v.push_back(2);
	}
	while (t != 0)
	{
		while (t >= temp)
		{
			t -= temp;
			v.push_back(tt);
		}
		tt++;
		temp--;
	}

	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
		cout << v[i] << " ";
}