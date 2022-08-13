#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll a,b;
	cin >> a >> b;
	for (int i = 0; i <min(a,b) ; i++) {
		cout << "01";
	
	}
	for (int i = 0; i < abs(a- b); i++) {
		cout << ((a<b)?1:0);

	}
	cout << "\n";
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

		

}