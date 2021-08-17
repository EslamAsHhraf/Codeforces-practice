#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	double pi = 2 * acos(0.0);
	while (t-- > 0)
	{
		double a, b;
		cin >> a >> b;
		cout << fixed << setprecision(6);
		cout << (pi * pow(a, 2.0)*(b / 360.0)) - (0.5*pow(a, 2.0))*(sin(b*pi / 180.0)) << endl;
	}
}
