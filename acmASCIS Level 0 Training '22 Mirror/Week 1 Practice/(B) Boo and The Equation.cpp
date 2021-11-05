#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	double a, b, c, ans;
	cin >> a >> b >> c;
	ans = (2 * a + 3 * b) * 5 * c;
	cout << fixed << setprecision(6) << ans;
}