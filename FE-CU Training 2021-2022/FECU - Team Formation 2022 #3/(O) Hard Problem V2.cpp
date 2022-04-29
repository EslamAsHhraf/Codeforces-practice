#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<ll>> e;
bool visited[5009],good[5009];
int coun;
ll n, m, s, x, y;
void dfs1(int v)
{
    good[v] = true;
    for (auto to : e[v])
        if (!good[to])
            dfs1(to);
}
void dfs2(int v)
{
    visited[v] = true;
    ++coun;
    for (auto to : e[v])
        if (!visited[to] && !good[to])
            dfs2(to);
}
int Minimumedges()
{
    dfs1(s-1);
    vector<pair<int, int> > val;
    for (int i = 0; i < n; ++i) {
        if (!good[i]) {
            coun = 0;
            memset(visited, false, sizeof(visited));
            dfs2(i);
            val.push_back({ coun, i });
        }
    }
    sort(val.begin(), val.end());
    reverse(val.begin(), val.end());
    int ans = 0;
    for (auto it : val) {
        if (!good[it.second]) {
            ++ans;
            dfs1(it.second);
        }
    }

    return ans;
}
void solve()
{
	cin >> n >> m >> s;
	e.resize(n);
	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		e[x-1].push_back(y-1);
	}
    cout << Minimumedges();
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	/*ll t;
	cin >> t;
	while(t--)*/
		solve();

}