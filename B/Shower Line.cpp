#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long count = 0,Max=0; 
	int a[5][5];
	vector<long long>v;
	vector<long long>temp;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> a[i][j];
		}
	}
	do 
	{
		temp = v;
		count = 0;
		while (!temp.empty())
		{
			for (int i = 0; i < temp.size()-1; i += 2)
			{
				count += a[temp[i]-1][temp[i + 1]-1] + a[temp[i + 1]-1][temp[i]-1];

			}
			temp.erase(temp.begin());
		}
		Max = (Max > count)?Max:count;
	} while (next_permutation(v.begin(), v.end()));
	cout << Max;
}