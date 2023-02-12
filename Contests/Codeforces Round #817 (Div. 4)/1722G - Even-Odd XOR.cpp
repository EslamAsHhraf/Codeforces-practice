#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
	int n;
	cin >> n;
	int tmp = 0;
	for (int i = 1; i <= n - 3; i++)
	{
		cout << i << " ";
		tmp ^= i;
	}
	int n1 = 1 << 29;
	int n2 = 1 << 30;
	tmp ^= n1;
	tmp ^= n2;
	cout << n1 << " " << n2 << " " << tmp << endl;
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