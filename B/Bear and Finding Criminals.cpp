#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,k,ans=0,l,r;
	cin >> n>>k;
	l = k - 1;
	r = k + 1;
	vector<long long>v(n+1);
	for (int i = 1; i <= n; i++)
		cin >> v[i];
	if (v[k])
		ans++;
	while (l>0&& r<=n)
	{
		if (v[l] == v[r] && v[l] && v[r])
			ans+=2;
		r++;
		l--;
	}
	if (r <= n && !l > 0)
	{
		ans += accumulate(v.begin() +r, v.end(),0);
	}
	else if (!r <= n && l > 0)
	{
		ans += accumulate(v.begin() , v.begin()+l+1, 0);
	}
	cout << ans;
}