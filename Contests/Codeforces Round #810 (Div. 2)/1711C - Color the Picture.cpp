#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n, m, k,ans=0, ans2=0;
	cin >> n >> m >> k;
	bool flag = 0, flag2 = 0;
	ll t1 = max(n, m),t2 = min(n, m);
	vector<ll>v(k);
	for (int i = 0; i < k; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	vector<ll>v2 = v;
	if (t2 % 2 == 1)
	{
		if (v[0] < t1 * 3) {
			flag = 1;
		}
		else {
			v[0] -= 3 * t1;
			ans += 3;
		}
	}
	if (t1 % 2 == 1)
	{
		if (v2[0] < t2 * 3) {
			flag2 = 1;
		}
		else {
			v2[0] -= 3 * t2;
			ans2 += 3;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		if (!flag)
		{
			ll temp = v[i] / t1;
			if (temp >= 2) {
				ans += temp;
				if (ans >= t2)
					break;
			}
		}
		if (!flag2)
		{
			ll temp = v2[i] / t2;
			if (temp >= 2) {
				ans2 += temp;
				if (ans2 >= t1)
					break;
			}
		}
	}
	if (ans >= t2 || ans2 >= t1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}