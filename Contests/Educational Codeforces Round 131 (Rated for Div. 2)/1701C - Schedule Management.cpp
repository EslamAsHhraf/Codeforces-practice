#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll  n,m,z;
	cin >> n >> m;
	vector<ll>v(n+1,0);
	for (int i = 1; i <= m; i++) {
		cin >> z;
		v[z]++;
	}
	ll l = 1, r = m * 2, mid,b,a;
	while (l <= r) {
		mid = (l + r) /2; 
		a = b = 0;
		for (int i = 1; i <= n; i++)
		{
			if (mid <= v[i])
				a += v[i] - mid;
			else
				b += (mid - v[i]) / 2;
		}
		if (a > b)
			l = mid + 1;
		else
			r = mid - 1;
	}
	cout << l << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}