#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, k;
	string s;
	cin >> n >> k >> s;
	if (k == 0)
	{
		cout << s;
		return;
	}
	if (n == 1)
	{
			cout << 0;
			return;
	}
	if (s[0] != '1')
	{
		s[0] = '1';
		k--;
		if (k == 0)
		{
			cout << s;
			return;
		}
	}
	for (int i = 1; i < n && k>0; i++)
	{
		if (s[i] != '0')
		{
			s[i] = '0';
			k--;
			if (k == 0)
				break;
		}
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	solve();

}