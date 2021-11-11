#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
void solve()
{
	ll sum = 0;
	for (int i = 0; i < 30; i++)
	{
		sum += pow(2, i);
		if (n == sum)
		{
			cout << "Valid";
			return;
		}
		else if (sum > n)
			break;
	}
	cout << "Invalid";
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	cin >> n;
	solve();
}