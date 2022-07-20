#include<iostream>
#include<cmath>
#include<vector>
#include<queue>
#include<algorithm>
#include<map>
#define AboNasser cin.tie(nullptr); ios::sync_with_stdio(false);
using namespace std;
#define ll long long
typedef pair<ll, ll> pr;


void solve()
{
	ll n, m;
	cin >> n >> m;
	vector<ll>l(m), r(m);
	for (int i = 0;i < m;i++) {
		cin >> l[i] >> r[i];
	}
	ll a = l[0], b = r[0];
	for (int i = 1;i < m;i++)
	{
		if(l[i]>b)
		{
			cout << 0;
			return;
		}
		if (r[i] < a)
		{
			cout << 0;
			return;
		}
			a = max(l[i], a);
			b = min(r[i], b);
	}
	cout << b - a+1;
}
int main()
{
	AboNasser
		//	freopen("input.txt", "r", stdin);
		//freopen("output.txt", "w", stdout);
		ll t;
	//cin >> t;
	//while (t--)
		solve();
	return 0;

}
