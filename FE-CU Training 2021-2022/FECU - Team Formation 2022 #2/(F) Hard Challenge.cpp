#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a, b;
	cin >> a >> b;
	if (a % b == 0)
	{
		cout << 0 << endl;
		return;
	}
	ll temp = a / b;
	cout << (temp+1) * b - a << endl;
	
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
		solve();

}