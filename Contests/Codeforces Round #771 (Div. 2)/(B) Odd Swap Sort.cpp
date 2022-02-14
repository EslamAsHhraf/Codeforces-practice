#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, t, a;
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<ll>odd, even, temp_even, temp_odd;
		for (int i = 0; i < n; i++)
		{
			cin >> a;
			if (a % 2 == 0)
				even.push_back(a);
			else
				odd.push_back(a);
		}
		temp_even = even;
		temp_odd = odd;
		sort(temp_even.begin(), temp_even.end());
		sort(temp_odd.begin(), temp_odd.end());
		if (temp_even == even && temp_odd == odd)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

	}
}