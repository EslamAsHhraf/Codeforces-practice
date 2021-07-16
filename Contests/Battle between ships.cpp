//#include<bits/stdc++.h>
#include<iostream>
#include<map>
//#include<pia>
using namespace std;
int main()
{
	long long n, d, l, r, c;
	cin >> n;
	map<pair<long long, long long>, pair<long long, long long>>m;
	for (int i = 0; i < n; i++)
	{
		cin >> d >> l >> r >> c;
		pair<long long, long long>p1;
		pair<long long, long long>p2;
		if (d == 0)
		{
			if (c + l - 1 >= 11 || c + l - 1 < 1)
			{
				cout << "N";
				return 0;
			}
			p1 = make_pair(0, r);
			p2 = make_pair(c, c + l - 1);
		}
		else
		{
			if (r + l - 1 >= 11 || r + l - 1 < 1)
			{
				cout << "N";
				return 0;
			}
			p1 = make_pair(1, c);
			p2 = make_pair(r, r + l - 1);
		}
		for (auto ti = m.begin(); ti != m.end(); ti++)
		{
			if (ti->first.first == p1.first)
			{
				if (ti->first.second == p1.second && ((p2.second >= ti->second.first&&  p2.second <= ti->second.second) || (p2.first >= ti->second.first&&  p2.first <= ti->second.second)))
				{
					cout << "N";
					return 0;
				}
			}
			else
			{
				if ((ti->second.first <= p1.second &&ti->second.second >= p1.second) && (ti->first.second >= p2.first&& ti->first.second <= p2.second))
				{
					cout << "N";
					return 0;
				}
			}
		}
		m.insert({ p1,p2 });
	}
	cout << "Y";
}