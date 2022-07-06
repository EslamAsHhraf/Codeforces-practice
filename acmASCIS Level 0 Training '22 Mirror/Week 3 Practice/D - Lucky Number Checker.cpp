#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,z;
	string s,temp;
	cin >> n;
	cin >> s;
	char d = s[s.size() - 1];
	if ((d=='1')||(d=='3')|| (d=='5')|| (d=='7')|| (d=='9') )
	{
		cout << "NO";
		return;
	}
	for (int i = 0; i < s.size(); i++)
	{
		char temp = s[i];
		if (!(temp == '6' || temp == '3' || temp == '9')) {
			cout << "NO";
			return;
		}
	}
	cout<< "YES";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();
}