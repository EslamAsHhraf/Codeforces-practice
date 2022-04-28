#include<bits/stdc++.h>
using namespace std;
#define ll long long
string s1, s2;
void solve()
{
	ll ans = 0;
	cin >> s1 >> s2;
	map<char, ll>mymap;
	for (int i = 0; i < s1.size(); i++) {
		mymap[s1[i]]++;
	}
	for (int i = 0; i < s2.size(); i++) {
		if (mymap[s2[i]] != 0)
			mymap[s2[i]]--;
		else
			ans++;
	}
	for (auto i : mymap)
		ans += i.second;
	cout << ans<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
		solve();
	
}