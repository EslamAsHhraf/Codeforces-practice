#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll  n;
	cin >> n;
	map<ll, ll>myMap;
	cout << 2 << endl;
	for (int i = 1; i <= n; i++) {
		if (myMap[i] == 1)
			continue;
		for (int j = i; j <= n; j*=2) {
			cout << j<<" ";
			myMap[j] = 1;
		}
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}