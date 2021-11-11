#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll su = 0, ab = 0, n, a, ans = 0;
void solve()
{
	for (int j = 0; j < 5; j++)
	{
		cin >> a;
		if (a%n == 0)
			ab += a;
		else
			su += a;
	}
	if (ab > su)
		cout << "3abas";
	else if (su > ab)
		cout << "Sultan";
	else
		cout << "TIE";
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	cin >> n;
	solve();
}