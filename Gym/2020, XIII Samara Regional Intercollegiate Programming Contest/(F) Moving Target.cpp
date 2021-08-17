#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, q, a, l, r, v, sum = 0;
	cin >> n;
	if (n % 2 == 0)
		cout << n / 2 + 1 << endl;
	else
		cout << (n + 1) / 2 << endl;
	for (int i = 1; i <= n; i += 2)
	{
		cout << i << " ";
	}
	if (n % 2 == 0)
		cout << n;
}
