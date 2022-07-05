#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
	ll n;
	cin >> n;
	if (n % 2 != 0)
	{
		cout << -1 << endl;
		return;
	}
	cout << 0 << " " << 0 << " " << n / 2<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}