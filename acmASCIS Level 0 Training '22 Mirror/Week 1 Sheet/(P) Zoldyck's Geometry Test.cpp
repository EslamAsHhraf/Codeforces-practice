#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	double  r, s;
	cin >> r >> s;
	if (r >= sqrt(2 * pow(s / 2, 2)))
		cout << "Circle";
	else if (s >= (2 * r))
		cout << "Square";
	else
		cout << "Complex";

}