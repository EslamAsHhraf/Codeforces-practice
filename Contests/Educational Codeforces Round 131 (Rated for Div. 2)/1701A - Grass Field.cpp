#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll  a,count = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> a;
			if (a == 1)
				count++;
		}
	}
	if (count == 1)
		cout << count << endl;
	else
		cout << count / 2<<endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();
}