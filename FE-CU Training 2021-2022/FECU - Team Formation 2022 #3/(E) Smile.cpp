#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a,b,x=0,ans=0;
	cin >> n>>a>>b;
	if (b < a)
	{
		cout << b;
		return;
	}
	n = n / 2;
	b -= a;
	if (b == 0)
	{
		cout << a;
		return;
	}
	cout << a + min(n,b);
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	/*ll t;
	cin >> t;
	while(t--)*/
		solve();

}