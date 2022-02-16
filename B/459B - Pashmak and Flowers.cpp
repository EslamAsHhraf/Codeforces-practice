#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, a,Max=-1,Min=LLONG_MAX;
	map<ll,ll>myMap;
	cin >> n;
	while (n--)
	{
		cin >> a;
		Max = max(a, Max);
		Min = min(a, Min);
		myMap[a]++;
	}
	cout << Max-Min<<" "<< ((Max != Min) ? myMap[Max] * myMap[Min] : (myMap[Min] * (myMap[Min]-1) /2));
}