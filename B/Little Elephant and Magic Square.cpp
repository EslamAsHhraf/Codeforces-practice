# include<iostream>

//#include <numeric> 

using namespace std;

int main()
{
	int n, sum = 0;
	long long a[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> a[i][j];
		}
	}
	int x1 = a[0][1] + a[0][2];
	int x2 = a[1][0] + a[1][2];
	int x3 = a[2][0] + a[2][1];
	a[0][0] = (-x1 + x2 + x3) / 2;
	a[1][1] = (x1 - x2 + x3) / 2;
	a[2][2] = (x1 + x2 - x3) / 2;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}