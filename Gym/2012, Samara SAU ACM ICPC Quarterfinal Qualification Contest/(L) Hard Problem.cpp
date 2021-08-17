#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
	vector<ll>v(n);
	vector<ll>v2(n);
	cin >> v[0];
	v2[0] = v[0];
	for (int i = 1; i < n; i++)
	{
		cin >> v[i];
		v2[i] = v[i] - v[i - 1];
	}
	for (int i = 0; i < n; i++)
	{
		cout << v2[i] << " ";
	}
}
