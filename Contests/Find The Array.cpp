#include<bits/stdc++.h>
#include<iostream>
#include<set>
#include <algorithm>
#include <numeric>
#include<vector>
#include<string>
//#include<pia>
using namespace std;
int main()
{
	long long n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		long long m,t,temp=3;
		cin >> m;
		for (long long z = 1; z <= 71; z++)
		{
			if (m <= pow(z, 2))
			{
				t =z ;
				break;
			}
		}
		cout << t << endl;
	}
}