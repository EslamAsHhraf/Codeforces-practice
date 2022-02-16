#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	double n, a, b, x;
	cin >> n >> a >> b;
	while (n--)
	{
		cin >> x;
		cout << (ll)floor(x - ((b / a)*floor(x*a / b))) << endl;
	}
}