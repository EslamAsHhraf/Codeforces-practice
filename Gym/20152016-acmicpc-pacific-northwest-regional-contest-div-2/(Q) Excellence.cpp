#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, min = 10e6 + 9;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n / 2; i++)
	{
		if ((v[i] + v[n - i - 1]) < min)
		{
			min = (v[i] + v[n - i - 1]);
		}
	}
	cout << min;
}
