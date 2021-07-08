# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
# include<map>
# include<set>
#include<stack>
//# include<list>
//#include <numeric> 

using namespace std;

int main()
{
	long long m, n, min = 0, max = 0;
	cin >> m >> n;
	vector<long long> v(n);
	int t1 = m;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (auto si = v.begin(); si != v.end(); si++)
	{
		int xx = *si;
		while (t1 && xx != 0)
		{
			min += xx;
			xx--;
			t1--;
		}
		if (!t1)
			break;
	}
	sort(v.begin(), v.end(), greater<long long>());
	int loc = 0;
	while (m)
	{
		max += v[0];
		v[0]--;
		sort(v.begin(), v.end(), greater<long long>());
		if (!v[0] > 0)
			break;
		m--;
	}

	cout << max << " " << min;
}