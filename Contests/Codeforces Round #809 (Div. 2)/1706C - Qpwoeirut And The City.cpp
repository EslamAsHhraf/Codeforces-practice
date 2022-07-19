#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
	ll n; 
	cin >> n;
	vector<int> v(n + 1), b(n);
	ll sum = 0, ans = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
	}
	for (int i = 2; i <= n - 1; i++)
	{
		b[i] = max(max(v[i - 1] - v[i] + 1, 0), max(v[i + 1] - v[i] + 1, 0));
	}
	for (int i = 2; i < n; i += 2)
	{
		sum += b[i];
	}
	if (n % 2 != 0) 
		cout << sum << endl; 
	else {
		ans = sum;
		for (int i = n - 1; i >= 3; i -= 2)
		{
			sum += b[i] - b[i - 1];
			ans = min(ans, sum);
		}
		cout << ans << endl;
	}
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
        solve();
}