#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	string s;
	bool flag = 0;
	cin >> s;
	sort(s.begin(), s.end());
	for (int i = 0; i < s.size() - 1; i++)
	{
		if (s[i + 1] != s[i] + 1)
		{
			flag = 1;
			break;
		}
	}
	if(flag)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
		solve();

}