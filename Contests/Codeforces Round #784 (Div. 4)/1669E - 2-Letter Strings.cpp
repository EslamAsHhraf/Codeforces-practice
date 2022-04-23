#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
void solve()
{
	ll ans = 0,count;
	string c;
	map<char, ll>mymap1,mymap2;
	map<string, ll>mymap3;
	set<string>myset;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> c;
		if (myset.count(c))
		{
			mymap3[c]++;
		}
		myset.insert(c);
		mymap1[c[0]]++;
		mymap2[c[1]]++;
	}
	for (auto i  :mymap1) {
		ans += (i.second* (i.second-1))/2;
	}
	for (auto i : mymap2) {
		ans += (i.second * (i.second - 1)) / 2;
	}
	for (auto i : mymap3) {
		ans -=(i.second * (i.second + 1));
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
		solve();
	
}