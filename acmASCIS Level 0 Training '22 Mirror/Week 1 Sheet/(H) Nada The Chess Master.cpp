#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	map<char, ll>myMap;
	ll count = 1, ans = 0, n, m;
	char c;
	for (char i = 'a'; i <= 'h'; i++)
	{
		myMap[i] = count;
		count++;
	}
	cin >> c >> n;
	m = myMap[c];
	int bottomLeft = min(m, n) - 1;
	int topRight = 8 - max(m, n);
	int bottomRight = min(m, 9 - n) - 1;
	int topLeft = 8 - max(m, 9 - n);

	ans = topLeft + topRight + bottomRight + bottomLeft;
	cout << ans;
}