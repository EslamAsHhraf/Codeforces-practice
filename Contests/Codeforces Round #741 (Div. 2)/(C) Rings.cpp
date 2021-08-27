#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve(string s)
{
	ll n = s.size();
	ll t = -1;
	for(int i=0;i<n;i++)
	{
		if (s[i] == '0')
		{
			t = i;
			break;
		}
	}
	t++;
	if (t ==0)
		cout << 1 << " " << n / 2 << " " << 2 << " " << n / 2 + 1 << endl;
	else if (t <= ceil((1.0*n) / 2))
		cout << t << " " << n << " " << t + 1 << " " << n << endl;
	else
		cout << 1 << " " << t << " " << 1 << " " << t-1 << endl;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	while (t--)
	{
		ll n;
		string s;
		cin >> n >> s;
		solve(s);
	}
}
