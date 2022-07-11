#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll m, a, n, sum=0;
	string s, s2;
	cin >> s >> m;
	n = s.size();
	vector<ll>v(n + 1, 0);
	for (int i = 0; i < m; i++)
	{
		cin >> a;
		v[a]++;
	}
	for (int i=1;i<=n/2;i++)
	{
		sum += v[i];
		if (sum % 2 != 0)
		{
				swap(s[i - 1], s[n - i]);
		}
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	//cin >> t;
//	while (t--)
		solve();
}