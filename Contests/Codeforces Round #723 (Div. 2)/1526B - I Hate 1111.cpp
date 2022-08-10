#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	
	ll n;
	cin >> n;
	

	for (int i = 0; i <= 10; i++)
	{
		if (n - 111 * i < 0)
		{
			cout << "NO\n";
			return;
		}
		if ((n - 111 * i) % 11 == 0)
		{
			cout << "YES" << endl;
			return;
		}
	}
	
	cout << "NO\n";	
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);

	ll t;
	cin >> t;
	while (t--)
		solve();
 
}