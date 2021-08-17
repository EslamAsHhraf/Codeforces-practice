#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> type(10 + 9);
vector<ll> val(10 + 9);
ll n, aa, sum = 0;
bool valid(ll a)
{
	for (int i = 0; i < n; i++)
	{
		if (type[i] == 0)
			a += val[i];
		else if (type[i] == 3)
			a *= val[i];
		else if (type[i] == 2)
			a -= val[i];
		else if (type[i] == 4)
		{
			if (a%val[i] == 0)
				a /= val[i];
			else
				return 0;
		}
		if (a < 0)
			return 0;
	}
	return 1;
}
int main() {


	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	string e;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> e >> aa;
		if (e == "SUBTRACT")
		{
			type[i] = 2;
		}
		else if (e == "MULTIPLY")
		{
			type[i] = 3;
		}
		else if (e == "DIVIDE")
		{
			type[i] = 4;
		}
		val[i] = aa;

	}
	for (int i = 1; i <= 100; i++)
	{
		if (valid(i))
		{
			sum++;
		}
	}
	cout << 100 - sum;
}

