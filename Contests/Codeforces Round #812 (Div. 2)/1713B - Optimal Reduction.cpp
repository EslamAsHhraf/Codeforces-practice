#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n;
	cin >> n;
	bool flaf = 0,flaf2=0, flaf3=0, flaf4=0;
	vector<ll>v(n);
	cin >> v[0];
	for (int i = 1; i < n; i++) {
		cin >> v[i];
		if (i!=n-1 &&v[i] < v[i - 1])
			flaf = 1;
		if (i!=1 && v[i] > v[i - 1])
			flaf2 = 1;
	}
	for (int i = 1; i < n; i++) {
		if (flaf3)
		{
			if (v[i] > v[i - 1])
				flaf4 = 1;
		}
		else if (v[i] < v[i - 1])
			flaf3 = 1;
	}
	if (flaf && flaf2&& flaf4)
		cout << "NO" << endl;
	else
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