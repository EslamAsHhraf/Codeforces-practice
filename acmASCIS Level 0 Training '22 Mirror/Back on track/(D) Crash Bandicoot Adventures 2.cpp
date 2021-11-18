#include <bits/stdc++.h>
using namespace std;
typedef long long ll; 
int countPrimeFactors(int n)
{
	if (n == 1)
		return 0;
	int cnt = 0;
	while (n % 2 == 0) {
		cnt++;
		n = n / 2;
	}
	for (int i = 3; i <= sqrt(n);
		i += 2) {
		while (n % i == 0) {
			cnt++;
			n = n / i;
		}
	}

	if (n > 2)
		cnt++;

	return cnt;
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	ll n;
	cin >> n;
	cout << countPrimeFactors(n);
}