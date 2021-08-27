#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<bool> primes(109,true);
void Sieve()
{
	primes[1] = primes[0] = 0;
	for (int i = 2; i*i < 109; i++)
	{
		if (primes[i])
		{
			for (int j = i * 2; j < 109; j += i)
			{
				primes[j] = 0;
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("bye.in", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll t;
	cin >> t;
	Sieve();
	while (t--)
	{
		ll n, a;
		string s;
		bool f = 0;
		cin >> n >> s;
		for (int i = 0; i <n; i++)
		{
			if (!primes[s[i]-'0'])
			{
				f = 1;
				cout << 1 << endl;
				cout << s[i] - '0' << endl;
				break;
			}
		}
		if (!f)
		{
			for (int i = 0; i< (n-1); i++)
			{
				for (int j = i+1; j < n; j++)
				{
					if(!primes[(s[i] - '0')*10+ (s[j] - '0')])
					{
						cout << 2 << endl;
						cout << (s[i] - '0') * 10 + (s[j] - '0') << endl;
						f = 1;
						break;
					}
				}
				if (f)
					break;
			}
		}
	}
}
