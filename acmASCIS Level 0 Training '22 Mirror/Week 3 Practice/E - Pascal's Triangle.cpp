#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll arr[69][69];
void solve()
{
	ll n;
	cin >> n;
	cout << 1 << endl;
	arr[0][0] = 1;
	for (int i = 1; i < n; i++) {
		arr[i][0] = 1;
		cout << 1 << " ";
		int j = 1;
		for (; j < (i); j++) {
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			cout << arr[i][j] <<" ";
		}
		arr[i][j] = 1;
		cout << 1 << " ";
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();
}