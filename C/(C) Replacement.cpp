#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n,a;
	cin >> n;
	vector<ll>v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	if (v[n - 1] == 1)
		v[n - 1] = 2;
	else
		v[n - 1] = 1;
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++)
	{
		cout << v[i]<<" ";
	}
}
