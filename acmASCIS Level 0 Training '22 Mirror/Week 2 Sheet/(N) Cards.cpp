#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	//ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	int t;
	ll n;
	cin >> t;
	while (t--)
	{
		scanf("%lld", &n);
		if (n % 2 != 0)
			printf("First Box\n");
		else
		{
			int count = 0;
			while (n % 2 == 0) {
				n /= 2;
				count++;
			}
			if (count % 2 == 0)
				printf("First Box\n");
			else
				printf("Second Box\n");
		}
	}
}