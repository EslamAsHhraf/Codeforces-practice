#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	double xr, yr, xw, yw;
	cin >> xr >> yr >> xw >> yw;
	double tempr = sqrt(pow(xr, 2) + pow(yr, 2));
	double tempw = sqrt(pow(xw, 2) + pow(yw, 2));
	if (tempr < tempw)
		cout << "Russo";
	else if (tempr > tempw)
		cout << "Wil";
	else
		cout << "Empate";
}
