#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, r;
	cin >> n >> r;
	double ans = M_PI * pow(r, 2) - pow(n, 2);
	cout << fixed << setprecision(6) << ans;
}