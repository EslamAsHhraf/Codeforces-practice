#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll a, x, y, ans = -1;
	cin >> a >> x >> y;
	ll temp = ceil(double(y - a) / a);
	if (y > 0 && y<a && a> x * 2 && -a < x * 2)
		ans = 1;
	else if (temp > 0 && (y % a ) != 0)
	{
		y = temp;
		if (y % 2 != 0)
		{
			if(a > x * 2 && -a < x * 2)
				ans = y + 1 + y / 2;
		}
		else
		{
			if (a > x && 0 < x)
				ans = y + 2 + y / 2 - 1;
			else if (-a < x && 0 > x)
				ans = y + 1 + y / 2 - 1;
		}
	}
	cout << ans;
}
