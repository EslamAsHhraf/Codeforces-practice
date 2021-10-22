#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int l = s.length();
		int ans = l;
		for (int i = 0; i < l; i++)
		{
			for (int j = i + 1; j < l; j++)
			{
				int tmp = 10 * (s[i] - '0') + (s[j] - '0');
				if (tmp % 25 == 0)
					ans = min(ans, l - (i + 2));
			}
		}
		cout << ans << endl;
	}
}
