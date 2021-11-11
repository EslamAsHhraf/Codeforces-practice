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
	ll n, m;
	cin >> n >> m;
	cout << factorial(n) / factorial(n - m);
}