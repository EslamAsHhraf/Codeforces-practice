#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, m,l,r,t;
	cin >> n;
	vector <long long>v(n+1); 
	vector <long long>vsort;
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	vsort = v;
	sort(vsort.begin(), vsort.end());
	for (int i = 1; i <= n; i++)
	{
		v[i] += v[i - 1];
		vsort[i] += vsort[i - 1];
	}
	cin >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> t >> l >> r;
		if (t == 1)
		{
			cout << v[r] - v[l - 1]<<endl;
		}
		else 
		{
			cout << vsort[r] - vsort[l - 1] << endl;;
		}
	}
}