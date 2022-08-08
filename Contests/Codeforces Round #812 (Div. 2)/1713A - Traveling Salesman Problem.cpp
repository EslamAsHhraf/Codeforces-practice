#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n,Maxx=0,Maxy=0,Maxxx=0,Maxyy=0;
	cin >> n;
	ll a, b;
	while (n--) {
		cin >> a >> b;
		if (a > 0) {
			Maxx = max(Maxx, a);
		}
		else {
			Maxxx = max(Maxxx, -1*a);
		}
		if (b > 0) {
			Maxy = max(Maxy, b);
		}
		else {
			Maxyy = max(Maxyy, b*-1);
		}
	}
	cout << (Maxyy + Maxy + Maxx + Maxxx) * 2 << endl;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
 
}