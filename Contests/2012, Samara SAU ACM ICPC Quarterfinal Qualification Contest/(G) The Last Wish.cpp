#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	string s;
	cin >> s;
	vector<char>v{ 'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h',
		'j','k','l','z','x','c','v','b','n','m' };
	set<char>q;
	if (s.size() > 26)
	{
		cout << "IMPOSSIBLE";
		return 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		auto it = find(v.begin(), v.end(), s[i]);
		if (it != v.end())
			v.erase(it);
	}
	int z = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (q.count(s[i]) == 0)
		{
			q.insert(s[i]);
		}
		else
		{
			s[i] = v[z];
			z++;
		}
	}
	cout << s;
}
