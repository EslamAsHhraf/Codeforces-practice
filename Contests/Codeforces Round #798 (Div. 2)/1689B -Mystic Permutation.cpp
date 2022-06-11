#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,con=0;
	cin >> n;
	vector<ll>v1(n), v2(n),ans(n);
	for (int i = 0; i < n; i++)
		cin >> v1[i];
	v2 = v1;
	if (n == 1) {
		cout << -1 << endl;
		return;
	}
	sort(v1.begin(), v1.end());
	while (con != n) {
		if (v2[con] != v1[con]) {
			ans[con] = v1[con];
			con++;
		}
		else {
			if (con != n - 1) {
				ans[con] = v1[con + 1];
				ans[con + 1] = v1[con];
				con += 2;
			}
			else
			{
				ans[con] = v1[con];
				swap(ans[con], ans[con - 1]);
				con++;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
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