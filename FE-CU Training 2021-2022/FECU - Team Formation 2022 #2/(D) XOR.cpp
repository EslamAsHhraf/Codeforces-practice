#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a, b;
	string s;
	cin >> a >> b;
	bitset<60> v1(a);
	bitset<60> v2(b);
	for (int i = 0; i <60; i++)
	{
		if (v1[i] == 0 && v2[i] == 1)
		{
			cout << -1 << endl;
			return;
		}
		if (v1[i] == 0 && v2[i] == 0)
			s += '0';
		else if (v1[i] == 1 && v2[i] == 0)
			s += '1';
		else if (v1[i] == 1 && v2[i] == 1)
			s += '0';
	}
	ll ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		ans += (s[i] - '0')*pow(2, i);
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
		solve();

}