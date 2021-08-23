#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll a, b, t;
	string s1, s2;
	cin >> a >> b >> s1 >> t >> s2;
	for (int i = 0; i < s2.length(); i++)
	{
		cout << s1[b - 1];
		if (s2[i] == 'R')
			b++;
		else
			b--;
	}
	cout << s1[b - 1];
}
