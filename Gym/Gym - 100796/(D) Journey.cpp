#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n, m, a, b, ans = 1e6;
struct pp
{
	ll x = 0, y = 0;
};
int dx[] = { 1,0,-1,0 };
int dy[] = { 0,1,0,-1 };
char arr[509][509];
ll v[509][509]{ -1 };
queue<pair<pp, ll>>q;
set<pair<ll, ll>>mySet;
bool check(int i, int j)
{
	return((i >= 0) && (i < n) && (j >= 0) && (j < m));
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> m >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] == '.')
			{
				if ((i + j) % 2 == 0)
					v[i][j] = a;
				else
					v[i][j] = b;
			}
		}
	}
	pp t;
	t.x = 0;
	t.y = 0;
	mySet.insert(make_pair(0, 0));
	q.push(make_pair(t, 0));
	while (!q.empty())
	{
		pair<pp, ll>ss;
		ss = q.front();
		q.pop();
		if (ss.first.x == (n - 1) && ss.first.y == (m - 1))
		{
			cout << ss.second;
			return 0;
		}
		for (int i = 0; i < 4; i++)
		{
			pair<pp, ll>es;
			ll tx = ss.first.x + dx[i];
			ll ty = ss.first.y + dy[i];
			if ((!check(tx, ty)) || (mySet.count(((make_pair(tx, ty)))) != 0) || (arr[tx][ty] == '#'))
			{
				continue;
			}
			mySet.insert(make_pair(tx, ty));
			es.first.x = tx;
			es.first.y = ty;
			es.second += ss.second + v[tx][ty];
			q.push(es);
		}
	}
	cout << "IMPOSSIBLE";
}
