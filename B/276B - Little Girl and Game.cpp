#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll ans = 0;
	string s;
	cin >> s;
	map<char, ll>myMap;
	for (int i = 0; i < s.length(); i++)
		myMap[s[i]]++;

	for (auto i:myMap)
	{
		if (i.second %2!=0)
			ans++;
	}

	if ((ans == 0) || (ans % 2 != 0))
		cout << "First" << endl;
	else
		cout << "Second" << endl;

}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	//cin >> t;
//	while (t--)
		solve();
}