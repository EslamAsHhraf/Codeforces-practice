#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n,a,before=0,count=0,ans=0;
	cin >> n;
	bool flag = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (!flag)
		{
			if (a > before)
			{
				count++;
				before = a;
			}
			else
			{
				flag = 1;
			}
		}
	}
	cout << count;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}