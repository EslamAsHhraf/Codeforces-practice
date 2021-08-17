#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n,ans=0,s=1;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.rbegin(), v.rend());
	for (int i = 0; i < n; i++)
	{
		if (v[i] >= s)
		{
			ans += v[i] - s;
			s++;
		}
		else
			break;
	}
	cout << ans;
}
