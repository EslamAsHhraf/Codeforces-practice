#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n;
	cin >>n;
	vector<ll>v;
	for (int i = 9; i >= 1; i--) {
		if (n >= i)
		{
			v.push_back(i);
				n -= i;
		}
	}
	reverse(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i];
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