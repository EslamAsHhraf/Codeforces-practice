#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	set<ll>Myset;
	ll n,sum=0,a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sum += a;
		Myset.insert(a);
	}
	for (auto i : Myset) {
		if (sum % i != 0)
		{
			cout << "NO";
			return;
		} 
	}
	cout << "YES";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}