#include<bits/stdc++.h>
using namespace std;
long long solve(long long n)
{
	if (n <= 6)
		return 15;
	else
	{
		if (n % 2 != 0)
			n++;
		return (n * 5) / 2;
	}
}
int main()
{
	std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, aa;
	cin >> n;
	while (n--)
	{
		cin >> aa;
		cout << solve(aa) << endl;
	}
}