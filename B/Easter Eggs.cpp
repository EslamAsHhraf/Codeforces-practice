#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,t,v;
	bool f = 0;
	cin >> n;
	vector<char>m{ 'G', 'B', 'I', 'V' };
	n -= 3;
	cout << "ROY";
	while(n>=4)
	{
		for (int z = 0; z < 4; z++)
		{
			cout << m[z];
	    }
		n -= 4;
	}
	for (int z = 0; z < n; z++)
	{
		cout << m[z];
	}
}