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
			cin >> aa;
			if (aa % 2 == 0)
				cout << 2 << " " <<aa <<endl;
			else
				cout << 2 << " " << (aa-1) << endl;
		}
}