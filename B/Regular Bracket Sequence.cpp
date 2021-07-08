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
	int length = 0;
	string s;
	set<long long>Set;
	stack<char>d;
	cin >> s;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] == '(')
		{
			d.push('(');
		}
		else
		{
			if (!d.empty())
			{
				d.pop();
				length += 2;
			}
			else
			{
				while (!d.empty())
					d.pop();
				Set.emplace(length);
			}
		}
	}
	cout << length;
}