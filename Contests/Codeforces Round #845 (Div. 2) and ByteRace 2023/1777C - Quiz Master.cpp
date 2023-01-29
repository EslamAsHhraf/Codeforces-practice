#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const int N = 1e5 + 3;
vector<int> d[N];
void init(int n) {
    for (int i = 1; i <= n; ++i)
        for (int j = i; j <= n; j += i)
            d[j].push_back(i);
}

void solve()
{
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	for (int& x : a)cin >> x;
	sort(a.begin(),a.end());
	vector<int> c(m + 1);
	int cnt = 0, ans = 2e9;
	for (int i = 0, j = 0; i < n; ++i) {
		while (j < n && cnt < m) {
			for (int x : d[a[j]]) {
				if (x > m)break;
				if (!c[x])++cnt;
				++c[x];
			}
			++j;
		}
		if (cnt == m)ans = min(ans, a[j - 1] - a[i]);
		for (int x : d[a[i]]) {
			if (x > m)break;
			--c[x];
			if (!c[x])--cnt;
		}
	}
	if (ans > 1e9)cout << -1 << '\n';
	else cout << ans << '\n';
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
	init(1e5+1);
    while(t--)
        solve();


}