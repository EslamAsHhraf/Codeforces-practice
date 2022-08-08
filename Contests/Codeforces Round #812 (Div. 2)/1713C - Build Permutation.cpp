#include<bits/stdc++.h>
using namespace std;
#define ll  long long
set<ll>myset;
void solve()
{
	ll n;
	cin >> n;
	vector<ll>v(n);
	for (ll i = n - 1; i >= 0;) {
		auto it= lower_bound(myset.begin(), myset.end(),i);
		ll l = *it - i;
		for (ll j = l; j <= i; j++)
		{
			v[j] = *it - j;
		}
		i = l - 1;
	}
	for (int i = 0; i < n; i++) {
		cout << v[i] << " ";
	}
		cout << endl;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	for (int i = 0; i <= 317; i++) {
		myset.insert(i * i);
	}
	while (t--)
		solve();
 
}