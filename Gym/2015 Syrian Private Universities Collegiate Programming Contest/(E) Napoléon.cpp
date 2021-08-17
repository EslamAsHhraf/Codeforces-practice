#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t, n;
	cin >> t >> n;
	while (t-- > 0)
	{
		ll x, x1, y, y1;
		cin >> x >> y >> x1 >> y1;
		if ((abs(x1 - x) % 2 == 0 && abs(y1 - y) % 2 == 0) || (abs(x1 - x) % 2 == 1 && abs(y1 - y) % 2 == 1))
			cout << max(abs(x1 - x), abs(y1 - y)) << endl;
		else cout << "can't reach!" << endl;
	}
}
