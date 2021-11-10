#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, t = 0, e = 0, b = 0, c = 0;
	string s;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		if (s[i] == 't')
			t++;
		else if (s[i] == 'e')
			e++;
		else if (s[i] == 'b')
			b++;
		else
			c++;

	}
	cout << t << " " << e << " " << b << " " << c;
}