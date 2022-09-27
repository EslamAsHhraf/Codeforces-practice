#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int aa[105];
void solve()
{
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int a; cin >> a;
		aa[i] = a + 1;
	}
	int i1, a1, i2, a2; cin >> i1 >> a1 >> i2 >> a2, i1--, i2--;
	int ans = INT_MAX;
	for (int i_ = 0; i_ < n; i_++) {
		int imin = min(i_, min(i1, i2));
		int imax = max(i_, max(i1, i2));
		int a = INT_MAX;
		for (int i = imin; i <= imax; i++)
			a = min(a, aa[i]);
		ans = min(ans, abs(min(a1, a) - a2) + abs(i1 - i_) + abs(i_ - i2));
	}
	cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();
    

}