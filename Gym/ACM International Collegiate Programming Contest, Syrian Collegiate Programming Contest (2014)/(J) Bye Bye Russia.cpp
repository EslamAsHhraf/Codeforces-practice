#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t,hc,mc,hw,mw,ans;
	t = read();
	for (int i = 1; i <= t; i++)
	{
		hc = read();
		mc = read();
		hw = read();
		mw = read();
		ans = (hw - hc) * 60 + (mw-mc);
		cout << "Case " << i << ": " << ans<<endl;
	}
}
