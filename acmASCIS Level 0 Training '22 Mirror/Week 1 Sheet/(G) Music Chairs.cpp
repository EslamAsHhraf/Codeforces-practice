#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	unsigned long long n, m, x,ans;
	cin >> n >> m >> x;
	ans = ((m %n) + (x % n)) % n;
	if (m & 1)
		ans = ((ans%n) + 1) % n;
	if (!ans)
		ans = n;
	cout << ans;

}