#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,ans;
vector<ll>v,l,r;
void solve()
{
	cin >> n;
	v.resize(n);
	l.resize(n);
	r.resize(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	l[0] = 1;
	for (int i = 1; i < n; i++) {
		if (v[i - 1] < v[i])
			l[i] = l[i - 1] + 1;
		else 
			l[i] = 1;
	}
	r[n-1] = 1;
	for (int i = n - 2; i >= 0; i--) {
		if (v[i] < v[i + 1])
			r[i] = r[i + 1] + 1;
		else
			r[i] = 1;
	}
	for (int i = 0; i < n; i++)
		ans = max(ans, l[i]);
	for (int i = 1; i < n - 1; i++)
	{
		if (v[i - 1] < v[i + 1])
			ans = max(ans, l[i - 1] + r[i + 1]);
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	
		solve();

}