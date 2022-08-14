#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n, k,a, ans = 0;
	cin >> n;
	int i = 1;
	if (n & 1)
		i=2,cout << 1 << " ";
	for (; i < n; i += 2)
	{
		cout << i + 1 << " " << i << " ";
	}
	cout << "\n";
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}