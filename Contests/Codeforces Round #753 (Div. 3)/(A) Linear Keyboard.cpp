#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		map<char, ll>myMap;
		char a;
		string s;
		ll ans = 0;
		for (int i = 1; i <= 26; i++)
		{
			cin >> a;
			myMap[a] = i;
		}
		cin >>s;
		for (int i = 0; i < s.size() - 1; i++)
			ans += abs(myMap[s[i]] - myMap[s[i + 1]]);
		cout << ans << endl;
	}
}