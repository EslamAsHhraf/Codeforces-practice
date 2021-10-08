#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<long long> >v;
long long x, y, n, m, c;
bool vis[150009];
void dfs(int node)
{
	vis[node] = 1, x++;
	for (auto i : v[node])
	{
		y++;
		if (!vis[i])
			dfs(i);
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> n >> m;
	v.resize(n + 5);
	while (m--)
	{
		cin >> x >> y;
		x--, y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for (long long i = 1; i <= n; i++)
		if (!vis[i])
		{
			x = 0, y = 0, dfs(i);
			c = x * (x - 1) / 2;
			y /= 2;
			if (y != c)
			{
				cout << "NO";
				return 0;
			}
		}
	cout << "YES";
}
