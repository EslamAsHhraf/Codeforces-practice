#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while (t-- > 0)
	{
		ll n;
		cin >> n;
		if (n == 2 || n == 3)
			cout << "second" << endl;
		else
			cout << "first" << endl;
	}
}
