#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, Max = -1e18, a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		Max = (a > Max) ? a : Max;
	}
	cout << Max;
}