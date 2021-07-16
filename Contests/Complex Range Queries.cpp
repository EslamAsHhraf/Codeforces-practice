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
	long long t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		long long n, k, tt = 1, mm = 0;
		bool f = 0;
		cin >> n >> k;
		vector<long long>temp;
		vector<long long>v(n);
		for (int j = 0; j < n; j++)
		{
			cin >> v[j];
			if (v[j] != v[0])
				f = 1;
		}
		if (n == 1 || !f)
		{
			cout << 0 << endl;
			continue;
		}
		sort(v.begin(), v.end());
		cout << *(v.end() - 1) - *v.begin() << endl;
	}

}