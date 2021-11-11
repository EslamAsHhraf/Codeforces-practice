#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	double slope, n, x, y, x1, y1;
	bool flag = 0, ans = 1;
	cin >> n >> x >> y >> x1 >> y1;
	if (x == x1)
		flag = 1;
	else
		slope = (y - y1) / (x - x1);
	for (int i = 0; i < (n - 2); i++)
	{
		cin >> x >> y;
		if (flag)
		{
			if (x != x1)
				ans = 0;
		}
		else
		{
			if (slope != ((y - y1) / (x - x1)))
				ans = 0;
		}
	}
	if (ans)
		cout << "YES";
	else
		cout << "NO";
}