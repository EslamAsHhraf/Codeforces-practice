#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	while (n--)
	{
		string s;
		cin >> s;
		long long ans = 0;
		map<char, long long>mymap;
		for (int i = 0; i < s.length(); i++)
		{
			mymap[s[i]]++;
			if (mymap[s[i]] <= 2)
				ans++;
		}
		cout << ans / 2 << endl;
	}
}