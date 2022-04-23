#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
int arr[200001], suml[200001], sumr[200001];
void solve()
{
	ll ans = 0, r = 0, l = 0;
	cin >> n;
	suml[0] = sumr[n] = 0;

	for (int i = 1; i <= n; i++)
	{
		cin >> arr[i];
		suml[i] = suml[i - 1] + arr[i];
	}
	sumr[n] = arr[n];
	for (int i = n - 1; i > 0; i--)
	{
		sumr[i] = sumr[i + 1] + arr[i];
	}
	ll f = 1, b = n;
	while (f < b)
	{
		if (suml[f] == sumr[b])
		{
			ans = f + n - b + 1;
			f++;
			b--;
		}
		else if (suml[f] < sumr[b])
		{
			f++;
		}
		else
			b--;
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
		solve();
	
}