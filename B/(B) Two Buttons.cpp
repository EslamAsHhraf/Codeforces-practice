#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {

	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, m,num=0;
	cin >> n >> m;
	while (n != m)
	{
		if (n > m)
		{
			m++;
		}
		else
		{
			if (m % 2 == 0)
			{
				m /= 2;
			}
			else
			{
				m++;
			}
		}
		num++;
	}
	cout << num;
}
