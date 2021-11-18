#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n,ans=0;
	string s;
	cin >> n;
	while (n--)
	{
		cin >> s;
		ans += (s[1] == '+') ? 1 : -1;
	}
	cout << ans;
}