#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, a, sum = 0, ans = 0;
	cin >> n;
	while (n--)
	{
		cin >> a;
		sum += a;
		if (sum < 0)
		{
			ans -= sum;
			sum = 0;
		}
	}
	cout << ans;
}
