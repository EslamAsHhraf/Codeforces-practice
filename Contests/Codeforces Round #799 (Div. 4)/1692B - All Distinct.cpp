#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a, ans=0,numEeven=0;
	cin >> n;
	map<ll, ll>myMap;
	for (int i = 0; i < n; i++) {
		cin >> a;
		myMap[a]++;
	}
	for (auto i : myMap) {
		if (i.second % 2 == 0) {
			numEeven++;
		}
		ans++;
	}
	if (numEeven % 2 != 0)
		ans--;
	cout << ans << endl;

}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}