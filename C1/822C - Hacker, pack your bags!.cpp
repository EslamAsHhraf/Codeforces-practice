#include<bits/stdc++.h>
using namespace std;
#define ll  long long
const int inf = 1e9;
const int N = 2e5;
vector<pair<int, int>>in[N + 100], out[N + 100];
int c[N + 100];
void solve()
{
	int n, x;
	cin >> n >> x;
	for (int i = 1; i <= n; i++) {
		int l, r, cost;
		cin >> l >> r >> cost;
		in[l].push_back({ r - l + 1, cost });
		out[r].push_back({ r - l + 1, cost });
	}
	int ans = inf * 2 + 1;
	for (int i = 1; i <= N; i++) {
		c[i] = inf + 1;
	}
	for (int i = 1; i <= N; i++)
	{
		for (auto it : in[i]) 
		{
			int t1 = it.first;
			int t2 = x - t1;
			if (t1 < x && c[t2] <= inf) 
			{
				ans = min(ans, it.second + c[t2]);
			}
		}
		for (auto it : out[i])
		{
			c[it.first] = min(c[it.first], it.second);
		}
	}
	if (ans >= inf * 2 + 1) {
		printf("-1\n");
	}
	else {
		printf("%d\n", ans);
	}
	
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();


}