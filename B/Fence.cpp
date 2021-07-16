#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,indx;
	cin >> n>>k;
	long long Min = 100 * k+1;
	vector<long long>v(n+1);
	for (int i = 1; i <= n; i++)
	{
		cin >>v[i] ;
		v[i]+=v[i-1];
	}
	for (auto i =k; i<=n; i++)
	{
		if (Min > v[i]- v[i - k])
		{
			Min = v[i] - v[i - k];
			indx = i-k+1;
		}
	}
	cout << indx;
}