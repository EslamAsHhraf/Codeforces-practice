#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	bool ans = 0;
	cin >> n;
	vector<long long>v(n);
	for(int i=0;i<n;i++)
	{
		cin >> v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size() - 2; i++)
	{
		if (v[i] + v[i + 1] > v[i + 2])
		{
			ans = 1;
			break;
		}
	}
	if (ans)
		cout << "YES";
	else
		cout << "NO";
}