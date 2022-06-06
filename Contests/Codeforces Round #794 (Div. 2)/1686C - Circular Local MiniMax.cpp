#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	int n;
	cin >> n;
	vector<ll>v(n),ans(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	ll x = 0, y = n / 2;
	for (int i = 0, j = 1; i < n && j < n; i += 2, j += 2) {
		ans[i] = v[x];
		ans[j] = v[y];
		x++;
		y++;
	}
	if (n % 2) {
		ans[n - 1] = v[n - 1];
	}
	for (int i = 1; i < n-1 ; i++) {
		if (!((ans[i] > ans[i - 1] && ans[i] > ans[i + 1]) || (ans[i] < ans[i - 1] && ans[i] < ans[i + 1]))) {
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
	for (int i = 0; i < n; i++) {
		cout << ans[i]<<" ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}