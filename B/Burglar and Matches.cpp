#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,count=0,a,b;
	cin >> n>>m;
	map<long long,long long>v;
	for (int i = 1; i <= m; i++)
	{
		cin >> a >> b;
		v[b] += a;
	}
	auto ti = v.end();
	ti--;
	while (n!=0)
	{
		if (n > ti->second)
		{
			count += ti->second*ti->first;
			n -= ti->second;
		}
		else
		{
			count += n*ti->first;
			n = 0;
		}
		if (ti == v.begin())
			break;
		ti--;
	}
	
	cout << count;
}