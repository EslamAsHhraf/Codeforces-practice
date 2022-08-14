#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	ll n, zero = 0 , ans = 0;
	cin >> n;
	vector<ll>v(n);
	bool f = 1;
	set<ll>myset;
	cin >> v[0];
	for (int i = 1; i < n; i++)
	{
		cin >> v[i];
		if (v[i] < v[i - 1])
			f = 0;
	}
	if (f)
	{
		cout << 0 << endl;
		return;
	}
	ll z = 0;
	for (int i = n-1; i > 0; i--)
	{
		if (v[i]<v[i-1])
		{
			z = i - 1;
			break;
		}
	}
	for (int i = 0; i <= z; i++) {
		myset.insert(v[i]);
	}
	for (int i = n - 1; i > 0; i--)
	{
		if (myset.count(v[i]))
		{
			ans = i;
			break;
		}
	}
	for(int i=z+1;i<ans;i++)
		myset.insert(v[i]);

	cout << myset.size() <<"\n";
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}