#include<bits/stdc++.h>
using namespace std;
#define ll long long
char arr[25][25];
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t, n, temp;
	cin >> t;
	while (t-- > 0)
	{
		cin >> n;
		vector<ll>s(n);
		ll sum = 0, ans = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> s[i];
		}
		sort(s.begin(), s.end());
		int i = 0;
		for (i = 0; i < n; i++)
		{
			sum += s[i];
			if (sum > 300)
				break;
		}
		int temp = i;
		for (int z = 0; z < i; z++)
		{
			ans += temp * s[z];
			temp--;
		}
		cout << i << " " << ans << endl;
	}
}
