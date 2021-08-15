#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, m, w, sum = 0;
	cin >> n >> m >> w;
	map<ll,ll>s;
	for (int i = 1; i <= n; i++)
	{
		for (int  j= 1; j <= m; j++)
		{
			for (int z = 1; z <= w; z++)
			{
				ll num = 0;
				ll t = i * j * z;
				ll temp = sqrt(t);
				if (s[t] != 0)
				{
					sum += s[t];
					continue;
				}
				if (temp == sqrt(t))
					num--;
				for (int e = 1; e <= temp; e++)
				{
					if (t%e == 0)
						num += 2;
				}
				sum += num % 1073741824;
				s[t] = num % 1073741824;
			}
		}
	}
	cout << sum;
}
