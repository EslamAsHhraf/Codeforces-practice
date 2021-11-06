#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>s;

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll x1, x2, y1, y2, r1, r2;
	cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
	double d = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	if (d > r1 + r2)
		cout << "no";
	else
		cout << "yes";

}