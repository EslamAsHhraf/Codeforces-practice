#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t, n;
	cin >> t;
	while (t-- > 0)
	{
		ll x, maxTarget = 1;
		cin >> n;
		vector <ll>  val(20001);
		set < ll > s;

		for (int i = 0; i < n; i++)
		{
			cin >> x;
			val[x] = 1 + val[x - 1];
			maxTarget = max(maxTarget, val[x]);

		}
		cout << maxTarget << endl;
	}
}
