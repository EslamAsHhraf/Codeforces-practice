#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() 
{
	ll n,a;
	cin >> n;
	map<ll, vector<ll>>myMap;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		myMap[a].push_back(i);
	}
	for (int i = 1; i <= n; i++)
	{
		if (myMap[i].size() == 0)
		{
			cout << 0 << " ";
			continue;
		}
		ll count = 1;
		for (int j = 1; j < myMap[i].size(); j++)
		{
		
			 if ((myMap[i][j] - myMap[i][j - 1]) % 2==1)
				count++;
		}
		cout << count << " ";
	}
	cout << endl;
}

int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //freopen("abc.in", "r", stdin);
    ll t;
    cin >> t;
    while (t--)
        solve();
}