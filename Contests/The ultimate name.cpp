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
	long long n, y, age, y2, age2;
	cin >> n;
	cin >> y >> age;
	for (int i = 1; i < n; i++)
	{
		cin >> y2 >> age2;
		if (y - y2 != age - age2)
		{
			cout << "mentiu a idade";
			return 0;
		}
	}
	cout << "idades corretas";
}