#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	ll n;
	cin >> n;
	ll tmp = 0;
	vector<ll>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] == 2)
			tmp++;
	}
	if (tmp == 0)
	{
		cout << 1 << endl;
		return;
	}
	else if (tmp % 2) {
		cout << -1 << endl;
		return;
	}
	tmp /= 2;
	for (int i = 0; i < n; i++)
	{
		if (v[i] == 2)
		{
			tmp--;
			if (tmp == 0)
			{
				cout << i + 1 << endl;
				break;
			}
		}
	}
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();


}