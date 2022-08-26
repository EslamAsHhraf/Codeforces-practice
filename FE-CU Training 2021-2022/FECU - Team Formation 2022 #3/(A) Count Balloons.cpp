#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,x,ans=0;
	cin >> n;
	set<ll>myset;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		if (x != 0)
			ans++;
	}
	cout <<ans<< endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}