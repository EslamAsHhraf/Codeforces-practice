#include <bits/stdc++.h>
using namespace std;
#define ll long long
set<ll>s;
void solve()
{
	for (int i = 0; i < 20; i++)
		s.insert(pow(2, i));
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	solve();
	if (s.count(n) == 0)
		cout << "NO";
	else
		cout << "YES";

}