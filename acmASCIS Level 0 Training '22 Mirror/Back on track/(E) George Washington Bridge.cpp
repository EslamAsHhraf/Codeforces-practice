#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t, a, n, h;
	cin >> t;
	while (t--)
	{
		ll max1 = 0, max2 = 0;
		cin >> h >> n;
		while (n--)
		{
			cin >> a;
			max1 = max(max1, min(a, h - a));
			max2 = max(max2, max(a, h - a));
		}
		cout << max1 << " " << max2 << endl;
	}
}