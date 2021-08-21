#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct node
{
	ll x=0, y=0;
};
inline ll read()
{
	ll x = 0, f = 1;
	char ch = getchar();
	while (ch<'0' || ch>'9') 
	{ if (ch == '-')
		f = -1; 
	ch = getchar(); 
	}
	while (ch >= '0'&&ch <= '9') 
	{ 
		x = x * 10 + ch - '0'; 
		ch = getchar(); 
	}
	return x * f;
}
bool cmp(node o1, node o2)
{
	return o1.x > o2.x;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t, m, n, c, a;
	t = read();
	for (int i = 1; i <= t; i++)
	{
		vector<node>v(10000+2);
		ll temp,ans=0,sum=0;
		ans = 0;
		m = read();
		n = read();
		c = read();
		for (int j = 1; j <= n; j++)
		{
			v[j].y = (j*j) % c;
		}
		for (int j = 1; j <= m; j++)
		{
			a = read();
			v[a].x++;
		}
		sort(v.begin(), v.end(), cmp);
		for (int i = 0; i < n; i++)
		{
			if (v[i].x == 0)
				break;
			sum += v[i].y;
			ans = max(ans, v[i].x*sum);
		}
		cout << "Case " << i << ": " << ans<<endl;
	}
}
