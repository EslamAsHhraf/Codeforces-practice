#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll a, b, c;
	set<ll>Myset;
	cin >> a >> b >> c;
	Myset.insert(a);
	Myset.insert(b);
	Myset.insert(c);
	if (Myset.size()<=2)
		cout << "YES"<<endl;
	else
		cout << "NO"<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("equal.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}