#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll aa;
	bool f = 0;
	vector<ll>v(3), v2(3);
	for (int i = 0; i < 3; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++)
	{
		cin >> v2[i];
	}
	sort(v2.begin(), v2.end());
	bool a1 = (pow(v[0], 2) + pow(v[1], 2)) == pow(v[2], 2);
	bool a2 = (pow(v2[0], 2) + pow(v2[1], 2)) == pow(v2[2], 2);
	bool a3 = v == v2;
	if (a1 && a2 && a3)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}

