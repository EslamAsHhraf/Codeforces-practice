#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t,n;
	string s;
	cin >> t;
	while (t--) {
		bool flag = 1;
		ll R = 0, B = 0;
		cin >> n >> s;
		for (int i = 0; i < n; i++)
		{
			if (s[i] == 'R')
				R++;
			else if (s[i] == 'B')
				B++;
			 if (s[i] == 'W' || (i+1)==n)
			{
				if ((R > 0 && B == 0) || (B > 0 && R == 0))
				{
					flag = 0;
					break;
				}
				R = 0;
				B = 0;
			}
		}
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "NO" << endl;
	}
}