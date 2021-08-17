#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, aa, Max = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> aa;
		Max = max(Max, aa);
	}
	Max++;
	while (Max % 2 == 0)
		Max /= 2;
	if(Max>1)
		cout << "Constantine";
	else
		cout << "Mike";
}
