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
int Finnd(int indx, vector<int>v, int last)
{
	if (indx >= last)
		return 0;
	else if (v[indx] == 1)
		return 1 + Finnd(indx + 1, v, last);
	else
		return 0;

}
int main()
{
	int n, op = 0, loc = 0;
	cin >> n;
	vector<int>v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
	}
	int last = v.end() - v.begin();
	for (int i = 0; i < last; i++)
	{
		int temp = 0;
		if (v[i] == 1)
		{
			temp = Finnd(i, v, last);
			op += temp + 1;
			i += temp;
		}
	}
	op = (op - 1 > 0) ? op - 1 : 0;
	cout << op;
}