#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while (t--)
	{
		ll l, r;
		cin >> l >> r;
		if((r / 2 + 1)>=l)
			cout << r % (r / 2 + 1)<<endl;
		else
			cout << r % (l) << endl;
	}
}
