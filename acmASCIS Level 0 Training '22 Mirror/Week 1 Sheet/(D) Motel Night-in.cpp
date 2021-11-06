#include <bits/stdc++.h>
using namespace std;
#define ll long long
double D, S;
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	cin >> D >> S;
	double w1 = D * 2.0 / 3, w2 = D / 3;
	if (S >= w1)
		cout << "Sunny Day";
	else if (S <= w2)
		cout << "Rainy Day";
	else
		cout << "Cloudy Day";

}