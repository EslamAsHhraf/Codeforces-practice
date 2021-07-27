#include<bits/stdc++.h>
using namespace std;
int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long int x1, x2, y1, y2, n,r,a,b,ans=0;
	cin >>x1 >>y1>>x2>>y2;
	cin >> n;
	queue<pair<long long, long long>>q;
	set<pair<long long, long long>>s;
	set<pair<long long, long long>>old;
	pair<long long, long long>pp;
	for (auto i = 0; i < n; i++)
	{
		cin >> r >> a >> b;
		for (int z = a; z <= b; z++)
			s.insert(make_pair(r, z));
	}
	int dx[8] = { 1, 1, 1, -1, -1, -1, 0, 0 };
	int dy[8] = { 0, 1, -1, 0,  1, -1, 1,-1 };
	q.push(make_pair(x1, y1));
	while (q.size()!=0)
	{
		ans++;
		long long size = q.size();
		for (int i = 0; i < size; i++)
		{
			pp = q.front();
			q.pop();
			for (int z = 0; z < 8; z++)
			{
				pair<long long, long long>neww;
				neww.first = pp.first + dx[z];
				neww.second = pp.second + dy[z];
				if (s.count(neww) == 0 ||old.count(neww)!=0)
					continue;
				q.push(neww);
				old.insert(neww);
				if (neww.first == x2 && neww.second == y2)
				{
					cout << ans;
					return 0;
				}
			}
		}
	}
	cout << -1;
}