#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll  l = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			l++;
		}
		else
		{
			if (l == 0)
			{
				cout << "IMPOSSIBLE";
				return 0;
			}
			else
				l--;
		}
	}
	while (l--)
	{
		s.push_back(')');
	}
	cout << s;
}
