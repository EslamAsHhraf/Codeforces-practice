#include<bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>s;
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll  n, aa;
	vector<ll>v(5),ans;
	cin >> n;
	while (n-->0)
	{
		cin >> aa;
		if (aa == 100)
			v[3] = 100;
		else if (aa == 0)
			v[0] = 1;
		else if (aa < 10)
			v[1] = aa;
		else if (aa % 10 == 0)
			v[2] = aa;
		else
			v[4] = aa;
	}
	if (v[0]==1)
		ans.push_back(0);
	if(v[3]!=0)
		ans.push_back(100);
	if(v[2]!=0)
		ans.push_back(v[2]);
	if(v[1]!=0)
		ans.push_back(v[1]);
	if(v[1]==0 && v[2]==0 && v[4]!=0)
		ans.push_back(v[4]);
	cout << ans.size() << endl;
	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i] << " ";
	}
}
