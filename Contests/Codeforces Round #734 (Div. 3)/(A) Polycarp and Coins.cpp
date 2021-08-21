#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n, m;
	cin >> n;
	while (n--)
	{
		cin >> m;
		if (m % 3 == 0)
		{
			cout << m / 3 << " " << m / 3 << endl;
		}
		else if ((m - 1) % 3 == 0)
		{
			cout << (m - 1) / 3 + 1 << " " << (m - 1) / 3 << endl;
		}
		else
		{
			cout << (m - 1) / 3 << " " << (m - 1) / 3 + 1 << endl;
		}
	}
}