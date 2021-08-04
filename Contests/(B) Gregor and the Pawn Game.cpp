#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	ll aa,t;
	cin >> t;
	while (t-- > 0)
	{
		ll n,num=0;
		cin >> n;
		string s1, s2;
		cin >> s1 >> s2;
		for (int i = 0; i < n; i++)
		{
			if (s2[i] == '1')
			{
				if (s1[i] == '0')
				{
					num++;
					s1[i] = '2';
				}
				else
				{
					if (i != 0&&s1[i - 1] == '1')
					{
						num++;
						s1[i - 1] = '2';
					}
					else if (i != n - 1&&s1[i + 1] == '1' )
					{
						num++;
						s1[i + 1] = '2';
					}
				}
			}
		}
		cout << num << endl;
	}
}