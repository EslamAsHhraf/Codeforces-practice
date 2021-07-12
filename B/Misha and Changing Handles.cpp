#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	map<string, string>temp;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		if (!temp.count(s1))
			temp[s2] = s1;
		else
		{
			temp[s2] = temp[s1];
			temp.erase(s1);
		}
	}
	cout << temp.size() << endl;
	for (auto i = temp.begin();i!=temp.end();i++)
	{
		cout << i->second << " " << i->first<<endl;
	}
}