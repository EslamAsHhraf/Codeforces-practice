#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n,ans=0, k1, k2,a;
	queue<ll>q1, q2;
	cin >> n;
	cin >> k1;
	while (k1--)
	{
		cin >> a;
		q1.push(a);
	}
	cin >> k2;
	while (k2--)
	{
		cin >> a;
		q2.push(a);
	}
	while (ans < 1000 && !q1.empty() && !q2.empty())
	{
		ll x1 = q1.front();
		ll x2 = q2.front();
		q1.pop();
		q2.pop();
		if (x1 > x2)
		{
			q1.push(x2);
			q1.push(x1);
		}
		else
		{
			q2.push(x1);
			q2.push(x2);
		}
		ans++;
	}
	if (q1.size() == 0)
		cout << ans << " " << 2;
	else if (q2.size() == 0)
		cout << ans << " " << 1;
	else
		cout << -1;
}
