#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, dollars = 0, health = 0;
	cin >> n;
	vector<long long>v(n + 1);
	for (int i = 1; i <= n; i++)
	{
		cin >> v[i];
		if (v[i - 1] >= v[i])
			health += v[i - 1] - v[i];
		else
		{
			if ((v[i] - v[i - 1]) <= health)
			{
				health += v[i - 1] - v[i];
			}
			else
			{
				dollars += -v[i - 1] + v[i] - health;
				health = 0;
			}
		}
	}
	dollars = (dollars < 0) ? 0 : (dollars);
	cout << dollars;
}