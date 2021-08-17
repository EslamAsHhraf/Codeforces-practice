#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	bool f = 0;
	string s;
	cin >> s;
	if (s.size() < 26)
	{
		cout << -1;
		return 0;
	}
	for (int i = 0; i <= (s.size() - 26); i++)
	{
		map<char, ll>m;
		vector<ll>v;
		for (int j = i; j <i+26; j++)
		{
			if (s[j] == '?')
			{
				v.push_back(j);
			}
			else
			{
				m[s[j]]++;
			}
		}
		if ((v.size() + m.size()) == 26) // if this substring may be nice or not
		{
			int z = 0;
			for (char j = 'A'; j <= 'Z'; j++)
			{
				if (m[j] == 0)
				{
					s[v[z]] = j;
					z++;
				}
			}
			f = 1;
			break;
		}
	}
	if (f)
	{
		for (int i = 0; i < s.size(); i++)// if there any char '?' replace by any char after make substring
		{
			if (s[i] == '?')
			{
				s[i] = 'A';
			}
		}
		cout << s;
	}
	else
		cout << -1;
}
