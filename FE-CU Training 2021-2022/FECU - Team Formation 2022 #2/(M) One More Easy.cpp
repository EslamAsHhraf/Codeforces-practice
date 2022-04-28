#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	vector<ll>v(5);
	for (int i = 0;i < 5; i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	cout << v[4] * v[3]<< endl; 
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
		solve();

}