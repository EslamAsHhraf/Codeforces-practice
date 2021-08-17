#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	double a, b;
	cin >> a >> b;
	printf("%.15f", ((pow(a, 2) + pow(b, 2)) / (100.0*(a + b))));
}
