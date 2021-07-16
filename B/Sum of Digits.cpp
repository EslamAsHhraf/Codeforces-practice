#include<bits/stdc++.h>
using namespace std;
int main()
{
	string n;
	long long op=0;
	cin >> n;
	long long le = n.length();
	while (le > 1)
	{
		long long c=0;
		for (int i = 0; i < le; i++)
		{
			c += n[i]-48;
		}
		n = to_string(c);
		le = n.length();
		op++;
	}
	cout << op;
}