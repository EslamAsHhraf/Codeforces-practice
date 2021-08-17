#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[1000000 + 9]{ 0 };
void div(ll n)
{
	for (ll i = 1; i <= n; i++)
	{
		if (arr[i] == 0)
			arr[i] = 1;
		for (ll j = (i + i); j <= n; j += i)
		{
			arr[j] += arr[i];
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
	div(n);
	ll temp = arr[n];
	cout << temp;
}
