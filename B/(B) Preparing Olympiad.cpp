#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, l, r, x,ans=0;
	cin >> n >> l >> r >> x;
	vector<int> problems(n);
	for (int i = 0; i < n; i++) {
		cin>>problems[i];
	}

	int total_case = 1 << n;
	for (int i = 0; i < total_case; i++) {
		int mi = INT_MAX;
		int ma = INT_MIN;
		int sum = 0;
		for (int j = 0; j < n; j++) {
			if (i&(1 << j)) {
				mi = min(mi, problems[j]);
				ma = max(ma, problems[j]);
				sum += problems[j];
			}
		}
		if (sum >= l && sum <= r && ma - mi >= x) ans++;
	}

	cout << ans;
}
