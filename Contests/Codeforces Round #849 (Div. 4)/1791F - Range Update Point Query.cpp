#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int a[200020], b[200020];
int find(int x) {
	return b[x] == x ? x : b[x] = find(b[x]);
}
void solve()
{
	int n, q;
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> a[i]; b[i] = i;
	}b[n + 1] = n + 1;
	while (q--) {
		int op, l, r;
		cin >> op >> l;
		if (op == 1) {
			cin >> r;
			for (int i = l; i <= r; i++) {
				i = find(i);
				if (i > r)break;
				int ans = 0;
				while (a[i])ans += a[i] % 10, a[i] /= 10;
				a[i] = ans;
				if (a[i] < 10)b[i] = i + 1;
			}
		}
		else cout << a[l] << endl;
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