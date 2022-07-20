#include<bits/stdc++.h>
using namespace std;
long long n, aa, ans = 0;
vector<long long>v;
long long minn(long long s = 0, long long m = 0)
{
	if (m == n)
	{
		return 0;
	}
	long long res;
	if (v[m] == 3)
	{
		if (s == 1)
			return  minn(2, m + 1);
		else if (s == 2)
			return minn(1, m + 1);
		else
			return minn(3, m + 1);
	}
	else if (v[m] == 2&& s!=2)
	{
		return  minn(2, m + 1);
	}
	else if (v[m] == 1&& s!=1)
	{
		return minn(1, m + 1);
	}
	else
	{
		return 1 + minn(0, m + 1);
	}
}
int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aa;
		v.push_back(aa);
	}
	cout << minn();

}