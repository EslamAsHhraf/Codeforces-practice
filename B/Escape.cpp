#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	double vp, vd, t,f, c,dp=0,dd=0,ans=0;
	cin >> vp >> vd >> t >> f >> c;
	if (vp >= vd)
		ans = 0;
	else
	{
		double x = vp * t;
		double v = vd - vp, t1;
		while (true)
		{
			t1 = x / v;
			x += t1 * vp;
			if (x >= c)
				break;
			else
			{
				ans++;
				x += (f + t1)*vp;
			}
		}
	}
	cout << ans;
}