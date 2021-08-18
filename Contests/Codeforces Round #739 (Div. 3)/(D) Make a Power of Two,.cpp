#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>v;
void init()
{
	for (ll i = 0; i <=63 ; i++)
	{
		v.push_back(to_string((ll) pow(2, i)));
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	init();
	while (t--)
	{
		ll Min = 29;
		string s;
		cin >> s;
		for (int i = 0; i < v.size(); i++)
		{
			int pos = 0;
			for (int j = 0; j < s.size(); j++)
			{
				if (pos >= v[i].size())
					break;
				if (v[i].at(pos) == s[j])
				{
					pos++;
				}
			}
			ll temp = (v[i].size() - pos)+ (s.size()-pos);
			Min = min(Min, temp );
		}
		cout << Min << endl;
	}

}
