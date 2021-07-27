#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long t;
	cin >> t;
	for (int z = 0; z < t; z++)
	{
		string s1, s2;
		cin >> s1 >> s2;
		long long le = ceil(s1.length() / 2), op = 0;
		bool f = 1, b = 0;
		long long com = 0;
		if (s1[le] != s2[le])
		{
			cout << -1 << endl;
			continue;
		}
		int i, j;
		for (i = 0, j = s1.length() - 1; i < s1.length(); i++, j--)
		{
			if (s1[i] != s2[i] && s1[i] != s2[j])
				break;
		}
		if (i != s1.length())
			cout << -1 << endl;
		else {
			for (int z = s1.length() / 2; z > 0; z--)
			{
				if (!f && (s1[le + z] != s2[le - z]))
				{
					f = 1;
					op++;
					continue;
				}
				else if (f && (s1[le + z] != s2[le + z]))
				{
					f = 0;
					op++;
					continue;
				}
			}
			cout << op << endl;
		}
	}
}