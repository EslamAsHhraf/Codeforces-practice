#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	vector<ll>v(4);
	for (int i = 0; i < 4; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if ((v[0] + v[3]) == (v[1] + v[2]))
		cout << "YES";
	else
		cout << "NO";
}
