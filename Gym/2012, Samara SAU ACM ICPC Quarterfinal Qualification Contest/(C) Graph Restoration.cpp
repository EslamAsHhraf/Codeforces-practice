#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, c[300 + 9][300 + 9], d[300 + 9][300 + 9];
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	bool f = 1;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> c[i][j];
			d[i][j] = c[i][j];
		}
	}
	for (int k = 1; k <= n; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				c[i][j] = min(c[i][j], c[i][k] + c[k][j]);
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (c[i][j] != d[i][j])
			{
				f = 0;
				break;
			}
		}
	}
	if (f)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
	}
	else
		cout << -1 << endl;
}
