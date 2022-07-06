#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n;
	string s,temp;
	cin >> n;
	cin >> s;
	temp = s;
	reverse(temp.begin(), temp.end());
	cout << temp << endl;
	if (temp == s)
		cout << "YES";
	else
		cout << "NO";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();

}