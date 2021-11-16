#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll ans = 0;
void mod(string num, ll a)
{
	
	ll res = 0;
	for (ll i = 0; i < num.length(); i++)
	{
		res = (res * 10 + (ll)num[i] - '0') % a;
		if (res ==0)
			ans++;
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll k;
	string n;
	cin >> k >> n;
	mod(n, 4);
	cout << ans;
}