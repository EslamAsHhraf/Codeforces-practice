#define _USE_MATH_DEFINES
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll k, n, w;
	cin >> k >> n >> w;
	ll ans = w * (w + 1)*k / 2 - n;
	cout << ((ans > 0) ? ans : 0);
}