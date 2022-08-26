#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,x,y;
	vector<ll>v;
	cin >> n;
	cin >> x;
	if (n == 1)
	{
		if (x == 1)
			cout << 1 << endl << 1<<endl;
		else
			cout << 0 << endl;
		return;
	}
	while (x != 1) {
		cin >> x;
		n--;
		if (n == 0) {
			cout << 0 << endl;
			return;
		}
	}
	for (int i = 1; i < n; i++)
	{
		cin >> y;
		if (y != x + 1)
		{
			v.push_back(x);
		}
		x = y;
	}
	v.push_back(y);
	cout << v.size() << endl;
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	/*ll t;
	cin >> t;
	while(t--)*/
		solve();

}