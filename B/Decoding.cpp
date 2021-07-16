#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,temp1,temp2;
	long long n;
	cin >> n;
	cin >> s;
	for (int z = 1; z <n; z+=2)
	{
		temp1.push_back(s[z]);
		if(z+1<s.length())
			temp2.push_back(s[z+1]);
	}
	if (n % 2 == 0)
	{
		reverse(temp2.begin(), temp2.end());
		cout << temp2 << s[0] << temp1;
	}
	else
	{
		reverse(temp1.begin(), temp1.end());
		cout << temp1 << s[0] << temp2;
	}
}