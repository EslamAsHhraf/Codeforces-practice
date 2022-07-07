#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n ;
    cin >> n;
	string s;
	map<char, vector<ll>>myMap;
	cin >> s;
	if (n == 1)
	{
		cout << "0";
		return;
	}
	if (n == 2) {
		if (s[0] != s[1]) {
			if (s[0] == 'b' || s[1] == 'b')
			{
				cout << "0";
				return;
			}
			else {
				cout << -1;
				return;
			}
		}
		cout << "0";
		return;

	}
	else
	{
		for (int i = 0; i < s.size(); i++) {
			myMap[s[i]].push_back(i+1);
		}
		size_t found = s.find("b");
		if (found != string::npos)
		{
			int t=0,z=1,pos = myMap['b'][0];
			vector<char>v;
			for (auto i : myMap) {
				if (i.first == 'b')
					continue;
				v.push_back(i.first);
			}
			if (n == 3) {
				if (myMap.size() == 2)
				{
						cout << "0";
				}
				else {
					if (pos == 2)
					{
						cout << "0";
						return;
					}
					else
					{
						cout << "1";
						return;
					}
				}
			}
			else {
				if (myMap.size() > 3)
				{

					cout << -1;
					return;
				}
				if (myMap.size() == 2)
				{
					
						cout << "0";
						return;
						
				}
				else {
					ll mid = myMap[v[0]].size()+1;
					ll mid2= myMap[v[1]].size() + 1;
					int count=0,count2=0,d=0,d2=0;
						for (int j = 0; j < myMap[v[0]].size(); j++)
						{
							if (myMap[v[0]][j] > mid)
								count++;
							if (myMap[v[0]][j] < mid2)
								count2++;
						}
						for (int j = 0; j < myMap[v[1]].size(); j++)
						{
							if (myMap[v[1]][j] < mid)
								d++;
							if (myMap[v[1]][j] > mid2)
								d2++;
						} 
						ll t1 = 0, t2 = 0;
						if (pos != mid)
							t1++;
						if (pos != mid2)
							t2++;
						if (d == 0 || count == 0)
						{
							if (t1 == 1)
								cout << min(1, max(count2, d2));
							else
								cout << "0";
						}
						else if (d2 == 0 || count2 == 0) {
							if (t2 == 1)
								cout << min(1, max(count, d));
							else
								cout << "0";
						}
						else
							cout << min(max(count,d)+t1, max(count2,d2)+t2);
						return;
				
				}
			}
		}
		else
		{
			if (myMap.size() > 1)
			{
				cout << -1;
				return;
			}
			else
			{
				cout << 0;
				return;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	freopen("abc.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();
}