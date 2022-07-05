#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a%2==0)
			cout << "Even ";
		else
			cout << "Odd ";
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}