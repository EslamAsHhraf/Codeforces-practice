#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a, b, c, d,ans=0;
	cin >> a>> b>> c>> d;
	if (b > a)
		ans++;
	if (c > a)
		ans++;
	if (d > a)
		ans++;
	cout << ans<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}