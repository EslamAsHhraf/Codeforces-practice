#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	vector<ll>v(3);
	for (int i = 0; i < 3; i++)
		cin >> v[i];
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++)
		cout << v[i] << " ";
}