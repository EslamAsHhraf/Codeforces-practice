#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t,v=0,p=0;
	cin >> n;
	map<long long, long long>m;
	for (int i = 1; i <= n; i++)
	{
		long long aa;
		cin >> aa;
		m[aa] = i;
	}
	cin >> t;
	for (int i = 1; i <= t; i++)
	{
		long long aa;
		cin >> aa;
		v+= m[aa];
		p += n - m[aa] + 1;
	}
	cout << v << " " << p;
}