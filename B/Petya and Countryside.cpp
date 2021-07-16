#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,Max=0,ans=0;
	cin >> n;
	vector<long long>v(n);
	vector<long long>Left(n);
	vector<long long>Right(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];
	for (int i = 1; i < n; i++)
	{
		ans= (v[i] >= v[i - 1])?(1+ans):0;
		Left[i] = ans;
	}
	ans = 0;
	for (int i = n-2; i >=0; i--)
	{
		ans = (v[i] >= v[i + 1]) ? (1+ans) : 0;
		Right[i] = ans;
	}
	for (int i=0; i <n; i++)
	{
		Max = max(Max, Left[i] + Right[i]+1);
	}
	cout << Max;
}