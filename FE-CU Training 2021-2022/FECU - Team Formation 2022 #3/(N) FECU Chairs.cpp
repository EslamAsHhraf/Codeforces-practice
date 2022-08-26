#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a,b,x=0,ans=0;
	cin >> n>>a>>b;
	if (n % 2 != 0)
		x = 1;
	if (ceil(n / 2)+x <= a && floor( n / 2) <= b)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}