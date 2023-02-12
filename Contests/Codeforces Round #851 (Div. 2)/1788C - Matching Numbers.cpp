#include<bits/stdc++.h>
using namespace std;
#define ll  long long

void solve()
{
	ll n;
	cin >> n;
	if (n % 2 == 0)  cout << "NO\n";
	else
	{
		cout << "YES\n";
		int num = n * 2;
		for (int i = 1; i <= n; i += 2)  cout << i << " " << num-- << endl;
		for (int i = 2; i < n; i += 2)  cout << i << " " << num-- << endl;
	}
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();


}