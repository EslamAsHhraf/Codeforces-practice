#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, a;
	bool flag = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 4 || a == 7)
			flag = 1;
	}
	if (flag)
		cout << "It's your lucky day.";
	else
		cout << "Tough luck!";
}