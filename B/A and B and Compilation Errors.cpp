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
	long long n, count1 = 0, count2 = 0, count3 = 0;
	cin >> n;
	int y;
	for (int o = 0; o < n; o++)
	{
		cin >> y;
		count1 += y;
	}
	for (int o = 0; o < n - 1; o++)
	{
		cin >> y;
		count2 += y;
	}
	for (int o = 0; o < n - 2; o++)
	{
		cin >> y;
		count3 += y;
	}
	cout << count1 - count2 << endl;
	cout << count2 - count3;
}