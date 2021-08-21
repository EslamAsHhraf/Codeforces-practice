#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, t, a,ans=0;
	vector<ll>pos;
	vector<ll>neg;
	cin >> n >> t;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > 0)
			pos.push_back(a);
		else 
			neg.push_back(-a);
	}
	sort(neg.begin(), neg.end());
	sort(pos.begin(), pos.end());
	for (int i = 0; i < neg.size(); i++)
	{
		if (neg[i] > t) 
			break;
		ll temp = t - 2 * neg[i];
		ll temp2 = 0;
		if (temp > 0)
		{
			temp2 = upper_bound(pos.begin(), pos.end(), temp) - pos.begin();
		}
		ans = max(ans, i + temp2 + 1);
	}
	for (int i = 0; i < pos.size(); i++)
	{
		ll temp = t - 2 * pos[i];
		ll temp2 = 0;
		if (temp > 0)
		{
			temp2 = upper_bound(neg.begin(), neg.end(), temp) - neg.begin();
		}
		ans = max(ans, i + temp2 + 1);
	}
	cout << ans;
}
