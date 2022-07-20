#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	map<char, string> mp;

	mp['0'] = mp['1'] = "";
	mp['2'] = "2";
	mp['3'] = "3";
	mp['4'] = "223";
	mp['5'] = "5";
	mp['6'] = "35";
	mp['7'] = "7";
	mp['8'] = "2227";
	mp['9'] = "2337";

	int n;
	string str;
	cin >> n >> str;
	string res;
	for (int i = 0; i < str.size(); ++i)
		res += mp[str[i]];

	sort(res.rbegin(), res.rend());
	cout << res;
}
