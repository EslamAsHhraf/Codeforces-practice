#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	ll n, m,a,p,power=0;
	bool flag = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		power = 0;
		flag = 0;
		for (int i = 0; i < m; i++)
		{
			power += p;
			cin >> a;
			if (power >= a)
				power -= a;
			else
			{
				flag = 1;
			}
		}
		if (flag)
			cout << "Upset ";
		else
			cout << "Happy ";
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}