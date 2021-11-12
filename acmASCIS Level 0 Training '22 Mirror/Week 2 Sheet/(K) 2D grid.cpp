#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, m;
	cin >> n >> m;
	cout << m * (n)*(n - 1) / 2 + n * m*(m - 1) / 2;
}