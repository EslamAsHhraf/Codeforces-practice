#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
	long long a = 1;
	for (int i = 1; i <= n; i++)
	{
		a *= i;
		a %= 7901;
	}
	return a;
}
int main()
{
	long long t;
	cin >> t;
	for (int z = 0; z < t; z++)
	{
		map<long long, long long>v;
		long long n, ans = 1;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			long long aa;
			cin >> aa;
			v[aa]++;
		}
		for (auto ti = v.begin(); ti != v.end(); ti++)
		{
			if (ti->second != 0)
			{
				ans *= fact(ti->second);
				ans %= 7901;
			}
		}
		cout << ans << endl;
	}
}