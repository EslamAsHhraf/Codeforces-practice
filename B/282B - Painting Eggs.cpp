#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a,g,ca=0,cg=0;
	string s;
	cin >> n;
	for (int i = 0; i < n; i++) {

		cin >> a >> g;
		if (a < g) {
			if (ca + a - cg > 500) {
				cg += g;
				s.push_back('G');
			}
			else
			{
				ca += a;
				s.push_back('A');
			}
		}
		else {
			if (cg + g - ca > 500) {
				ca += a;
				s.push_back('A');
			}
			else
			{
				cg += g;
				s.push_back('G');
			}
		}
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();
}