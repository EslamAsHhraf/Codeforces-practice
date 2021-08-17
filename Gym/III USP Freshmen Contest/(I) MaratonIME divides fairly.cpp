#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll t;
	cin >> t;
	while (t--)
	{
		ll a, b;
		cin >> a >> b;
		ll temp1 = floor((double)(a + b) / 2);
		ll temp2 = ceil((double)(a + b) / 2);
		if (abs(temp1 - temp2) == abs(a - b))
			cout << "Ok" << endl;
		else
		{
			cout << temp1 << " " << temp2 << endl;
		}
	}
}
