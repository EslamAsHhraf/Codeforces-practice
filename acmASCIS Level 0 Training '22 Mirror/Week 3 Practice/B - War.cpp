#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,sum=0,a;
	cin >> n;
	vector<ll>v(n),temp;
	map<ll, ll>myMap;
	set<ll>mySet;
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		mySet.insert(v[i]);
	}
	temp = v;
	sort(temp.begin(), temp.end());
	myMap[temp[0]] = 0;
	for (int i = 1; i < n;i++)
	{
		if (temp[i] == temp[i - 1])
			myMap[temp[i]] = myMap[temp[i - 1]];
		else
			myMap[temp[i]] = i;
	}
	for (int i = 0; i < n; i++)
	{
		cout << myMap[v[i]] << " ";
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}