#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		string s, ans;
		bool f = 0;
		cin >> s;
		map<char, ll>myMap;
		ll nume = 0;
		char r;
		for (int i = 0; i < s.length(); i++)
		{
			myMap[s[i]]++;
		}
		for (auto i : myMap)
		{
			if (i.second % 2 == 0)
			{
				while (i.second != 0)
				{
					ans.insert(ans.length() / 2, 2, i.first);
					i.second -= 2;
				}

			}
			else
			{
				if (f)
					break;
				f = 1;
				i.second--;
				r = i.first;
				while (i.second != 0)
				{
					ans.insert(ans.length() / 2, 2, i.first);
					i.second -= 2;
				}
			}
		}
		if (f)
			ans.insert(ans.length() / 2, 1, r);
		if (ans.length() == s.length())
			cout << ans << endl;
		else
			cout << "impossible" << endl;
	}
}
