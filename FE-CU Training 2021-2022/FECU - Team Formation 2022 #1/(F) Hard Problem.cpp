#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s1, s2;
void solve()
{
	ll n;
	cin >> n;
	vector<ll>v(2 * n);
	for (int i = 0; i < 2 * n; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	ll sum = 0;
	for (int i = 0; i < n; i++)
		sum += v[i];
	for (int i = n; i < 2*n; i++)
		sum -= v[i];
	if (sum == 0)
		cout << -1;
	else
		for (int i = 0; i < 2 * n; i++)
			cout<< v[i]<<" ";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
		solve();
	
}