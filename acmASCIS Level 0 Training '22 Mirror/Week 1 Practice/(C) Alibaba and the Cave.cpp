#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a + b - c) == d || (a + b * c) == d || (a - b + c) == d || (a - b * c) == d || (a * b + c) == d || (a * b - c) == d)
		cout << "YES";
	else
		cout << "NO";
}