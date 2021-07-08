# include<iostream>

# include<vector>

using namespace std;
int main()
{
	long long n, t, c, count = 0, ways = 0;
	cin >> n >> t >> c;
	vector<long long> v(n);
	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		if (v[i] <= t)
			count++;
		else
		{
			if (count >= c)
			{
				ways += count - c + 1;
			}
			count = 0;
		}
	}

	if (count >= c)
	{
		ways += count - c + 1;
	}
	cout << ways;

}