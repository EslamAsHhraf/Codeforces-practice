#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);

	ll t;
	cin >> t;
	while (t--)
	{
		ll n, k;
		cin >> n >> k;
		vector<ll>a(k);
		for (int i = 0; i < k; i++) cin >> a[i];

		sort(a.rbegin(), a.rend());

		ll cat_position = 0;
		ll total = 0;
		for (int i = 0; i < k; i++) 
		{
			if (cat_position < a[i]) {
				cat_position += (n - a[i]);
				total++;
			}
			else
				break;
		}
		cout << total << endl;
	}
}
