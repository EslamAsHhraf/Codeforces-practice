#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll  t;
	cin >> t;
	while (t--)
	{
		ll n;
		string s;
		cin >> n;
		cin >> s;
		bool f = 0;
		while (s.find('?') != string::npos)
		{
			for (int i = 0; i < n; i++)
			{
				if (s[i] == 'B')
				{
					f = 1;
					if (i != 0 && s[i - 1] == '?')
						s[i - 1] = 'R';
					if (i != (n - 1) && s[i + 1] == '?')
						s[i + 1] = 'R';
				}
				else if (s[i] == 'R')
				{
					f = 1;
					if (i != 0 && s[i - 1] == '?')
						s[i - 1] = 'B';
					if (i != (n - 1) && s[i + 1] == '?')
						s[i + 1] = 'B';
				}
			}
			if (!f)
				s[n / 2] = 'B';
		}
		cout << s << endl;
	}
}
