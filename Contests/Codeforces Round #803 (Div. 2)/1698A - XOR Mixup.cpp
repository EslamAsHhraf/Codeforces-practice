#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a;
	cin >> n;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	do {
		a = v[1];
		for (int i = 2; i < n; i++) {
			a ^= v[i];
		}
		if (a == v[0])
			break;
	} while (std::next_permutation(v.begin(),v.end()));
	cout << a<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}