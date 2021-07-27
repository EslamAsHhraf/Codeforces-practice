#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	while (n--)
	{
		long long m, k, aa, b, z = 1;
		cin >> m >> k;
		map<long long, vector<long long>>mymap;
		map<long long, long long > mymap2;
		vector<long long>v;
		vector<long long>v2(m);
		for (int i = 0; i < m; i++)
		{
			cin >> aa;
			mymap[aa].push_back(i);
		}
		for (auto i = mymap.begin(); i!=mymap.end(); i++)
		{
			if (i->second.size() >= k)
			{
				for (int j = 1; j <= k; j++)
					v2[i->second[j-1]] = j;
			}
			else
			{
				v.insert(v.end(),i->second.begin(), i->second.end());
			}
		}
		b = v.size() / k;
		for (int i = 0; i < v.size(); i++)
		{
			mymap2[z]++;
			if (mymap2[z] > b)
				break;
			v2[v[i]] = z;
			z++;
			if (z > k)
				z = 1;
		}
		for (auto i : v2)
			cout << i << " ";
		cout << endl;
	}
}