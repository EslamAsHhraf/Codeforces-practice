#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
void sol()
{
	ll temp2 = 0, temp1 = 0;
	string s1, s2;
	cin >> n;
	bool flag = 1;
	while (true)
	{
		if(flag)
		{
			temp2 += 2;
			temp1 += 1;
			s2.push_back('2');
			s1.push_back('1');
		}
		else
		{
			temp1 += 2;
			temp2 += 1;
			s1.push_back('2');
			s2.push_back('1');
		}
		if (temp1 == n && temp2 == n)
		{
			cout <<((temp1>temp2)?s1:s2)<< endl;
			break;
		}
		if (temp1 == n)
		{
			cout << s1<<endl;
			break;
		}
		if (temp2 == n)
		{
			cout << s2<<endl;
			break;
		}

	  flag= !flag;
	}
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		sol();
	}
}