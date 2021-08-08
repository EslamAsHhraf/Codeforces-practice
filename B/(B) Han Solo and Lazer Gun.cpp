#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	int x0, y0, n, x1, y1, count = 0;
	double slope;
	cin >> n >> x0 >> y0;
	map<double, int>v;
	for (int i = 0; i < n; i++)
	{
		cin >> x1 >> y1;

		if (x1 - x0 == 0)
		{
			count = 1;
			continue;
		}
		slope = (y1 - y0) / ((x1 - x0)*1.0);
		if (!v.count(slope))
		{
			v.insert({ slope,1 });
		}
	}
	cout << v.size() + count;
}
