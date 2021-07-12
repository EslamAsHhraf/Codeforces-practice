#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long a, c,ans=0;
	vector<long long>Arra(20);
	vector<long long>Arrc(20);
	cin >> a>>c;
	int k1 = 0;
	while (a != 0)
	{
		Arra[k1++] = a % 3;
		a /= 3;
	}
	int k2 = 0;
	while (c != 0)
	{
		Arrc[k2++] = c% 3;
		c/= 3;
	}
	int n = max(k2, k1);
	for (int i = 0; i < n; i++)
	{
		ans += pow(3, i)*((Arrc[i]+3-Arra[i])%3);
	}
	cout << ans;
}