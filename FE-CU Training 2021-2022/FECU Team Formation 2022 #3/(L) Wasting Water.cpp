#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n, m,ans=0,x,y;
	cin >> n >> m;
	vector<ll>v(n),a(n,0);
	for (ll i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (ll i = 0; i < m; i++) {
		cin >> x >> y;
		 a[x-1]+=y;
	}
	for (ll i = 0; i < n; i++)
	{
		if (v[i] <= a[i])
		{
			ans += a[i] - v[i];
			a[i] = v[i];
		}
		else {
			if ((ans+a[i]) >= v[i])
			{
				ans -= (v[i] - a[i]);
				a[i] = v[i];
			}
			else
			{
				a[i] += ans;
				ans = 0;
			}
		}
	}
	cout << ans<<endl;
	for (int i = 0; i < a.size(); i++) {
		cout << a[i];
		if(i!=a.size()-1)
			cout << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
		solve();

}