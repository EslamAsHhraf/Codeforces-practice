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
		string s;
		cin >> s;
		for (int i = 0; i < s.length(); i++)
		{
			if (s[i] == '7')
				cout << 4;
			else
				cout << 7;
		}
		cout << endl;
	}
}