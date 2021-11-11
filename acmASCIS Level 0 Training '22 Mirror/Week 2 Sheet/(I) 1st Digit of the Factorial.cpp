#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll factorial(ll n)
{
	return (n == 1 || n == 0) ? 1 : n * factorial(n - 1);
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	if (n == 1 || n == 0)
		cout << 1;
	else if (n == 2 || n == 4)
		cout << n;
	else if (n == 3)
		cout << 6;
	else
		cout << 0;
}