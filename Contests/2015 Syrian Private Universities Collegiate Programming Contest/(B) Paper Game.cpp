#include<bits/stdc++.h>
using namespace std;
#define ll long long
char arr[25][25];
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
		int w, h, n;
		cin >> w >> h;
		n = w * h - 1;
		if (n % 2 == 0) {
			cout << "Hussain" << endl;
		}
		else
			cout << "Hasan" << endl;
	}
}
