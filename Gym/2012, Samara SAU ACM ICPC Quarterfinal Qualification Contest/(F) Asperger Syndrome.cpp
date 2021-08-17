#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[200000 + 9]{ 0 };
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, aa, num = 0;
	set <ll>s;;
	cin >> n;
	while (n--)
	{
		cin >> aa;
		if (s.size() == 0)
			arr[aa] = 1;
		else if (aa < *s.begin())
		{
			arr[aa] = 1 + arr[*s.begin()];
			num += arr[*s.begin()];
		}
		else if (aa > *s.rbegin())
		{
			arr[aa] = 1 + arr[*s.rbegin()];
			num += arr[*s.rbegin()];
		}
		else
		{
			auto it = s.upper_bound(aa);
			auto it2 = it;
			it2--;
			ll temp = max(arr[*it], arr[*it2]);
			num += temp;
			arr[aa] = temp + 1;
		}
		s.insert(aa);
	}
	cout << num;
}
