# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
# include<map>
# include<set>
#include<stack>
//# include<list>
//#include <numeric> 
using namespace std;
int main()
{
	string s1, s2;
	map<char, long long>m;
	getline(cin, s1);
	getline(cin, s2);
	for (long long i = 0; i < s1.length(); i++)
	{
		if (s1[i] == ' ')
			continue;
		m[s1[i]]++;
	}
	for (long long i = 0; i < s2.length(); i++)
	{
		if (s2[i] == ' ')
			continue;
		if (m[s2[i]] > 0)
		{
			m[s2[i]]--;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}