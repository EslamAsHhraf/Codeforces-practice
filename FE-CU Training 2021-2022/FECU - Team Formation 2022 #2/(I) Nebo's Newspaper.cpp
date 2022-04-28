#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	string s;
	cin >> s;
	ll k = s.size()-1;
	ll inc = (s.size() % 2 == 0) ? s.size() / 2 : s.size() / 2 + 1;
	for (int i = 0; i <inc; i++) {
		if (s[i] != s[k])
			s[k] = s[i];
		k--;
	}
	cout << s;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	/*cin >> t;
	while(t--)*/
		solve();

}