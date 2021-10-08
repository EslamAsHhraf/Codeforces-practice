#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, k, l, r, sall, sk;
	cin >> n >> k >> l >> r >> sall >> sk;
	ll rest= sk % k;
	ll num = (sk - rest) / k;
	vector<ll>v(k, num);
	for (int i = 0; i < rest; i++)
		v[i]++;
	sall -= sk;
	n -= k;
	if (n != 0 && sall!=0)
	{
		rest = sall % n;
		num = (sall - rest) / n;
	}
	else
	{
		for (int i = 0; i < v.size(); i++)
			cout << v[i] << " ";
		return 0;
	}
	vector<ll>v2(n, num);
	for (int i = 0; i < rest; i++)
		v2[i]++;
	for (int i = 0; i < v.size(); i++)
		cout << v[i]<<" ";
	for (int i = 0; i < v2.size(); i++)
		cout << v2[i]<<" ";


}
