#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string s;
	ll n, h = 0, ss = 0;
	cin >> n;
	cin >> s;
	for (int i = 0; i <= n; i++)
	{
		if (s[i] == ':')
		{
			if (i != 0)
			{
				if (s[i - 1] == ')')
					ss++;
				else if (s[i - 1] == '(')
					h++;
			}
			if (i != (n - 1))
			{
				if (s[i + 1] == ')')
					h++;
				else if (s[i + 1] == '(')
					ss++;
			}
		}
	}
	if (h == ss)
	{
		cout << "BORED";
	}
	else if (h > ss)
	{
		cout << "HAPPY";
	}
	else
	{
		cout << "SAD";
	}
}
