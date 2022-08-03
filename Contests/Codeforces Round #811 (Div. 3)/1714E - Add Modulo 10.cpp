#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n;
	cin >>n;
	vector<ll>v(n);
	set<ll>f;
	ll fi = 0;
	for (int i = 0; i < n; i++) {
		cin>>v[i];
		if (v[i] % 10 == 5 || v[i] % 10 == 0)
			fi++ , f.insert(v[i] + v[i] % 10);
	}
	if (fi == n) {
		if (f.size() == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
		return;
	}
	if (fi > 0)
	{
		cout << "NO" << endl;
		return;
	}
	for (int i = 0; i < n; i++) {
		if (v[i] % 10 != 2)
		{
			while (v[i] % 10 != 2)
				v[i] += v[i] % 10;
		}
	}
	ll rem = (v[0]/10) % 2;
	for (int i = 1; i < n; i++) {
		if ((v[i] / 10) % 2 != rem)
		{
			cout << "NO" << endl;
			return;
		}
	}
	cout << "YES" << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}