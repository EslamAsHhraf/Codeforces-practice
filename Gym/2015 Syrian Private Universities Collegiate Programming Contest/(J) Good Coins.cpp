#include<bits/stdc++.h>
using namespace std;
#define ll long long
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);

}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll t, x, y, temp;
	cin >> t;
	while (t-- > 0)
	{
		cin >> x >> y;
		temp = gcd(max(x, y), min(x, y));
		if (temp == 1)
		{
			cout << "GOOD" << endl;
		}
		else
			cout << "NOT GOOD" << endl;
	}
}
