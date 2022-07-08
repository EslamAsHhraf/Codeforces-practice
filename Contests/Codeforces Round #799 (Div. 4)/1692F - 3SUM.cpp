#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,a;
	cin >> n;
	vector<ll>v;
	map<ll, ll>myMap;
	for (int i = 0; i < n; i++)
	{
		cin >>a;
	    myMap [ a % 10]++;
	}
	for (auto i : myMap) {
		if (i.second > 3)
			i.second = 3;
		while (i.second--) {
			v.push_back(i.first);
		}
	}
	n = v.size();
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			for (int z = j+1; z < n; z++) {
				if ((v[i] + v[j] + v[z]) % 10 == 3) 
				{
					cout << "YES"<<endl;
					return;
				}
			}
		}
	}
	cout << "NO"<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}