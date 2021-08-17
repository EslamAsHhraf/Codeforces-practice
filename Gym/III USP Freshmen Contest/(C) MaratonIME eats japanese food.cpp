#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, x, y, rr;
	char aa;
	bool f = 1;
	cin >> n;
	vector<pair<ll, ll>>v;
	vector<ll>r;
	while (n--)
	{
		f = 1;
		cin >> aa >> x >> y >> rr;
		/*if ((x-rr) < 0 || (y-rr) < 0 || (rr+x)>1000 ||	(rr+y)>1000)
		{
			cout << "No" << endl;
			continue;
		}*/
		if (aa == 'A')
		{
			for (int i = 0; i < v.size(); i++)
			{
				if ((pow(r[i] + rr, 2) > (pow(x - v[i].first, 2) + pow(y - v[i].second, 2))))
				{
					f = 0;
					break;
				}
			}
			if (f)
			{
				v.push_back(make_pair(x, y));
				r.push_back(rr);
				cout << "Ok" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
		else
		{
			for (int i = 0; i < v.size(); i++)
			{
				if (x == v[i].first &&  y == v[i].second && rr == r[i])
				{
					f = 0;
					v.erase(v.begin() + i);
					r.erase(r.begin() + i);
					break;
				}
			}
			if (!f)
			{
				cout << "Ok" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
}
