#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, x2=-1, y2=-1, x1=-1, y1=-1,a1,b1,a2,b2;
	cin >> n;
	bool flag = 0;
	cin >> x1 >> y1 >> x2 >> y2;
	n--;
	for (int i = 0; i < n; i++) {
		cin >> a1 >> b1 >> a2 >> b2;
		if (!flag)
		{
			x1 = max(a1, x1);
			y1 = min(y1, b1);
			x2 = min(a2, x2);
			y2 = max(b2, y2);
			if (( a2 < x1) || (a1 > x1) || (b1 < y2) || (b2 > y1))
			{
				flag = 1;
			}
		}
	}
	if (flag)
		cout << 0;
	else
		cout << (x2 - x1 +1 ) * (y1 - y2 +1);
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}