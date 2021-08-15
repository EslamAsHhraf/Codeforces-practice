#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, sa = 1, k, b, aa;
	string e;
	cin >> n >> k;
	b = k;
	while (n--)
	{
		cin >> aa >> e;
		if (e == "SAFE")
		{
			if (aa > sa)
				sa = aa;
		}
		else
		{
			if (aa < b)
				b = aa;
		}
	}
	cout << sa + 1 << " " << b - 1;
}

