#include<iostream>
#include<cmath>
#include<vector>
#include<set>
#include<algorithm>
#include<map>
#define AboNasser cin.tie(nullptr); ios::sync_with_stdio(false); 
using namespace std;
#define ll long long
typedef pair<ll, ll> pr;

void solve()
{
	ll n;
	string s;
	cin >> n >> s;
	int misz = 1e9;
	for (int i = 0;i < s.size();i++)
	{
		if (s[i] == 'A')
		{
			map<char, int>mp;
			mp['A'] = 1;
			for (int j = i;j < s.size();j++)
			{
				if (s[j] == 'Z'&&mp[s[j]-1]==1)
				{
					misz = min(misz, j - i + 1);
				}
				else {
					char a = s[j] - 1;
					if (mp[a] == 1)
						mp[s[j]] = 1;
				}
			}
		}
	}
	cout << misz << endl;
}
int main()
{
	AboNasser
	freopen("collectingofficer.in", "r", stdin);
	ll t;
	cin >> t;
	while(t--)
	solve();
	return 0;

}