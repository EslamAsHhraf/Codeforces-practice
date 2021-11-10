#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, a, r, count = 0, f = -1, l = -1;;
	cin >> n >> r;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a == r)
		{
			count++;
			if (f != -1)
				l = i;
			else
				f = l = i;
		}

	}
	if (f == -1)
		cout << -1;
	else
		cout << f << " " << l << " " << count;
}