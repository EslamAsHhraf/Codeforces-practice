#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	if (n % 2 != 0 || n == 2)
		cout << "NO";
	else
		cout << "YES";
}