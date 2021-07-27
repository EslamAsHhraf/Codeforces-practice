#include<bits/stdc++.h>
using namespace std;
map<char,double>my;
double minn(vector<pair<long long, long long>>v, vector<pair<long long, long long>>v2, long long x)
{
	double temp = 0, min = 50;
	for (auto z : v)
	{
		for (auto d : v2)
		{
			temp = sqrt(double(pow(d.first - z.first, 2) + pow(d.second - z.second, 2)));
			min = (min > temp) ? temp : min;
			if (min <= x)
			{
				return min;
			}
		}
	}
	return min;
}
int main()
{
	long long int n, m, x, min = 0, q, temp2 = 0;
	cin >> n >> m >> x;
	char aa;
	double temp1;
	map<long long, vector<pair<long long, long long>>>mymap;
	vector<pair<long long, long long>>shift;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> aa;
			if (aa == 'S')
				shift.push_back(make_pair(i, j));
			else
				mymap[aa].push_back(make_pair(i, j));
		}
	}
	cin >> q;
	while (q--)
	{
		cin >> aa;
		if (aa >= 'a'&&aa <= 'z')
		{
			if (mymap[aa].size() == 0)
			{
				cout << -1;
				return 0;
			}
		}
		else
		{
			aa += 32;
			if (mymap[aa].size() == 0 || shift.size() == 0)
			{
				cout << -1;
				return 0;
			}
			if (my[aa] == 0)
			{
				temp1 = minn(shift, mymap[aa], x);
				my[aa] = temp1;
			}
			min = (my[aa] > x) ? min + 1 : min;
		}
	}
	cout << min;
}