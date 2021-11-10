#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		for (int i = 0; i < (n-1); i++)
			cout << n << " ";
		cout << n << endl;
	}
}