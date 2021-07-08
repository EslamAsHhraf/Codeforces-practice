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
	long long n;
	cin >> n;
	map<char, long long>v;
	for (int i = 0; i < n; i++)
	{
		char a;
		cin >> a;
		v[a]++;
	}
	if (v['I'] == 1)
		cout << 1;
	else if (v['I'] == 0)
		cout << v['A'];
	else
		cout << 0;

}