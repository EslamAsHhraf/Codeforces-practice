#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	string s1, s2, op1, op2, sol, ans;
	ll x, y, z;
	cin >> s1 >> op1 >> s2 >> op2 >> sol;
	stringstream geek(s1);
	geek >> x;
	stringstream geek1(s2);
	geek1 >> y;
	stringstream geek2(sol);
	geek2 >> z;
	if (op1 == "+")
	{
		if (x + y == z)
			ans = "Yes";
		else
			ans = to_string(x + y);
	}
	else if (op1 == "-")
	{
		if (x - y == z)
			ans = "Yes";
		else
			ans = to_string(x - y);
	}
	else
	{
		if (x * y == z)
			ans = "Yes";
		else
			ans = to_string(x * y);
	}
	cout << ans;
}