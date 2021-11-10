#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n, odd = 0, even = 0;
	cin >> n;
	while (n != 0)
	{
		ll temp = n % 10;
		if (temp & 1)
			odd++;
		else
			even++;
		n /= 10;
	}
	cout << "Even : " << even << endl;
	cout << "Odd : " << odd << endl;
}