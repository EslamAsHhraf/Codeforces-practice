#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	ll n, aa, sum = 0;
	multiset<ll>s;
	cin >> n;
	while (n--)
	{
		cin >> aa;
		if (aa % 2 == 0)
			sum += aa;
		else
		{
			s.insert(aa);
		}
	}
	sum += accumulate(s.begin(), s.end(), 0);
	if (s.size() % 2 != 0)
	{
		sum -= *s.begin();
	}
	cout << sum;
}
