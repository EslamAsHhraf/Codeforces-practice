#include <bits/stdc++.h>
using namespace std;
#define ll long long
char arr[500 + 9][500 + 9];
ll step[500 + 9][500 + 9];
ll dx[] = { 1 , 0 ,-1, 0 };
ll dy[] = { 0 , 1 ,0, -1 };
set<pair<ll, ll>> s;
ll n, m, ti, tj;
bool valid(ll i, ll j)
{
	return(i >= 0 && i < n && j >= 0 && j < m);
}
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	queue<pair<ll, ll>>q;
	memset(step, 0, sizeof(step));
	q.push(make_pair(0, 0));
	s.insert(make_pair(0, 0));
	while (!q.empty())
	{
		pair<ll, ll> temp = q.front();
		q.pop();
		ll val = arr[temp.first][temp.second] - '0';
		if (temp.first == n - 1 && temp.second == m - 1)
		{
			cout << step[temp.first][temp.second];
			return 0;
		}
		for (int i = 0; i < 4; i++)
		{
			ti = temp.first + val * dx[i];
			tj = temp.second + val * dy[i];
			if (valid(ti, tj) && s.count(make_pair(ti, tj)) == 0)
			{
				q.push(make_pair(ti, tj));
				s.insert(make_pair(ti, tj));
				step[ti][tj] = step[temp.first][temp.second] + 1;
			}
		}
	}
	cout << "IMPOSSIBLE";
}

