#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, k, ones=0,size=0;
	cin >> n >> k;
	while (n > 0)
	{
		if(n&1)
			ones++;
		size++;
		n /= 2;
	}
	size = (size > ones) ? (size - 1) : ones;
	if (size >= k)
		cout << "YES";
	else
		cout << "Bad Luck";
}