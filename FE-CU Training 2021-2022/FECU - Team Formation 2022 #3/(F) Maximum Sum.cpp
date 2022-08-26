#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, k;
ll arr[71][71];
ll val[71][71][71][71];

ll db(ll row, ll col, ll sum, ll count) {
	if (row == n)
	{
		if (sum == 0)
			return sum;
		else
			return INT_MIN;
	}
	if (col == m || count == m / 2)
	{
		return  val[row][col][sum][count]=db(row + 1, 0, sum, 0);
	}
	ll ans = val[row][col][sum][count];
	if (ans != -1)
		return ans;
		
	return  val[row][col][sum][count]=max(db(row, col + 1, sum, count), db(row, col + 1, (sum + arr[row][col]) % k, count + 1) + arr[row][col]);
	
}
void solve()
{
	memset(val, -1, sizeof(val));
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	cout << db(0,0,0,0) << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	/*ll t;
	cin >> t;
	while(t--)*/
		solve();

}