#include<iostream>
#include <cmath>
using namespace std;
int main()
{
	long long m, t, k, num = 0;
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> t >> k;
		num = (pow(t, 2) > (pow(k, 2) * 2)) ? 1 : 2;
		cout << num << endl;
	}
}