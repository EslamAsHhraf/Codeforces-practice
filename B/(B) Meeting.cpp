#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll vx[1000 + 9], vy[1000 + 9], r[1000 + 9];
ll n;
bool valid(int x, int y)
{
	for (int i = 0; i < n; i++)
	{
		if((pow(x-vx[i],2)+pow(y - vy[i], 2))<=pow(r[i],2))
			return 0;
	}
	return 1;
}
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll x1, x2, y1, y2, num = 0, xmax, ymin, xmin, ymax;
	cin >> x1 >> y1 >> x2 >> y2 >> n;
	xmax = max(x1, x2);
	xmin = min(x1, x2);
	ymax = max(y1, y2);
	ymin = min(y1, y2);
	for (int i = 0; i <n; i++)
	{
		cin >> vx[i] >> vy[i] >> r[i];
	}

	for (int i = xmin; i <= xmax; i++)
	{
		for (int j = ymin; j <= ymax; j++)
		{
			if ((i== xmin|| i== xmax || j== ymin|| j== ymax)&& valid(i, j) )
				num++;
		}
	}
	cout << num;
}
