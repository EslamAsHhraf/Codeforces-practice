#include <bits/stdc++.h>
using namespace std;


int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	long long  a, b;
	long long ans;
	cin >> a >> b;
	(b >= a) ?
		ans = a * (b * 2 - (b - 1)) : ans = b * (a * 2 - (a - 1));
	cout << ans << endl;
}





