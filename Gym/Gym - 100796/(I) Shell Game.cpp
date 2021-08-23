#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	double r, R, h;
	double H;
	scanf("%lf %lf %lf", &r, &R, &h);
	H = R * h / (R - r);
	double ans = 1.0 * ((H*R) / (sqrt(R*R + H * H) + R));
	printf("%.12f\n", min(ans, (1.0*h) / 2.0));
}
