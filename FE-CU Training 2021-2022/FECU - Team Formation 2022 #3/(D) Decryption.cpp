#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>v;
void printDivisors(ll n)
{

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			v.push_back(i);
}
void solve()
{
	ll n;
	string s,temp;
	cin >> n >> s;
	printDivisors(n);
	//reverse(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		temp = s.substr(0,v[i]);
		reverse(temp.begin(), temp.end());
		s.erase(0, v[i]);
		temp += s;
		s = temp;
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	/*ll t;
	cin >> t;
	while(t--)*/
		solve();

}