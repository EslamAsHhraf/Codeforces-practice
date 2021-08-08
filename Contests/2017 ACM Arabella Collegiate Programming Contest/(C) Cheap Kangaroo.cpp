#include <bits/stdc++.h>
using namespace std;
long long arr[100005];

int gcd(int a, int b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

int findGCD(long long arr[], int n)
{
	int result = arr[0];
	for (int i = 1; i < n; i++)
	{
		result = gcd(arr[i], result);

		if (result == 1)
		{
			return 1;
		}
	}
	return result;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cin >> arr[0];
		long long minNum = arr[0];
		long long minCost = arr[0];
		for (int i = 1; i < n; i++)
		{
			cin >> arr[i];
			minCost += arr[i];
		}
		cout << minCost << " " << findGCD(arr, n) << endl;
	}
}
