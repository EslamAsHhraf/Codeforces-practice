#include<bits/stdc++.h>
using namespace std;
bool valid(long long a,long long b,long long n,long long m)
{
	return(a <= n && b <= m && a >= 1 && b >= 1);
}
int main()
{
	//std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, m, x, y, k, l = 0, r = 1e9 + 2,aa,bb,ans=0;
	cin >> n >> m >> x >> y >> k;;
	while(k--)
	{
		long long step=0,mid;
		l = 0, r = 1e9 + 2;
		cin >> aa>>bb;

		while(l<=r)
		{
			mid =l +(r-l) / 2;
			if (valid(x+ mid * aa,y+ mid * bb,n,m))
			{
				step = mid;
				l = mid + 1;
			}
			else
			{
				r = mid- 1;
			}
		}
		x += step * aa;
		y += step * bb;
		ans += step;
	}
	cout << ans;
}