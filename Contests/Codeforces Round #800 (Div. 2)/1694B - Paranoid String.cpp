#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n,ans=0;
	string s;
	cin >> n;
	cin >> s;
	ans = n;
	for (int i = 1; i < n; ++i)
		if (s[i] != s[i - 1])
			ans += i;
	cout << ans<<"\n";
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

		

}