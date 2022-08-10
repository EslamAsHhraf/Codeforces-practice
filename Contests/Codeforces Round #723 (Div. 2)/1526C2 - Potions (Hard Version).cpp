#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
void solve()
{
	 cin >> n;
	priority_queue<ll, vector<ll>, greater<ll>>pq;
	ll s = 0, ans = 0;
	ll k;
	for (int i = 0; i < n; i++) {
		cin >> k;
		pq.push(k);
		s += k;
		ans++;
		while (s < 0) {
			s -= pq.top();
			pq.pop();
			ans--;
		}
	}
	cout << ans;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	//ll t;
	//cin >> t;
	//while (t--)
		solve();
 
}