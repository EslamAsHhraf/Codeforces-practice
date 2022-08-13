#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n;
	cin >> n;
	vector<ll>v(n),ans(n,1);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	int i = n - 1;
	while (i>0&&v[i] == 0)
	{
		ans[i] = 0;
		i--;
	}
	ans[i] = 0;
	if (v[i] > 0) {
		cout << "NO" << endl;
		return;
	}
	for (; i > 0; --i)
	{
		if (ans[i] <= v[i])
		{
			cout << "NO" << endl;
			return;
		}
		ans[i - 1] = ans[i] - v[i];
	}
	if (v[0] == ans[0]) {
		cout << "YES" << endl;
	}
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