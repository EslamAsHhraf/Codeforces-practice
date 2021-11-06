#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	double slope, x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	int a = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

	if (a == 0)
		cout << "Yes";
	else
		cout << "No";
}