#include<bits/stdc++.h>
using namespace std;
int main()
{
	//std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	double n, x, y, aa, max = 0, a, b, min = 5001,r1=0;
	cin >> n;
	while (n--)
	{
		cin >> aa;
		r1 = (r1 < aa) ? aa : r1;
	}
	cin >> x;
	while (x--)
	{
		cin >> aa;
		max = (max < aa) ? aa : max;
	}
	cin >> y;
	while (y--)
	{
		cin >> aa;
		min = (min > aa) ? aa : min;
	}
	cin >> a >> b;
	printf("%.12f", sqrt(pow(r1, 2) / (1 + (a / b) *(min / max))));
}