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
	long double k, n, sum = 0;
	cin >> n ;
	for (int i = 0; i < n; i++)
	{
		long long h,op=0;
		cin >> h;
		vector<long long>a(h);
		vector<long long>b(h);
		vector<long long>dif(h);
		map<long long,long long>prn;
		map<long long,long long>prp;
		for (int z = 0; z < h; z++)
			cin >> a[z];
		for (int z = 0; z < h; z++)
			cin >> b[z];
		for (int z = 0; z < h; z++)
		{
			dif[z] = a[z] - b[z];
			if (dif[z] > 0)
			{
				prp[z + 1] = dif[z];
				op += dif[z];
			}
			else if (dif[z] < 0)
				prn[z + 1] = -1 * dif[z];
		}
		long long t = accumulate(dif.begin(), dif.end(), 0);
		if (t != 0)
		{
			cout << -1<<endl;
			continue;
		}
		cout << op << endl;
		auto tip = prp.begin();
		auto tin= prn.begin();
		while (op != 0)
		{
			cout << tip->first << " " <<tin->first <<endl;
			tip->second--;
			tin->second--;
			if (tip->second == 0)
				tip++;
			if (tin->second == 0)
				tin++;
			op--;
		}
	}

}