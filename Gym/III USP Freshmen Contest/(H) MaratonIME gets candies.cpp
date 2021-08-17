#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n = 50, l = 1, r = 1e9, mid;
	char t;
	while (n--)
	{
		mid = (l + r) / 2;
		cout << 'Q' << " " << mid << endl;
		cout.flush();
		cin >> t;
		if (t == '>')
			l = mid + 1;
		else if (t == '<')
			r = mid - 1;
		else
			break;
	}
}
