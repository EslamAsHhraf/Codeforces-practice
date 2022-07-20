#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << -1 ;
		return 0;
	}
	for (int i = 0; i < n; i++)
	{
		cout << i<<" ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << i<<" ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << (i+i)%n<<" ";
	}
}
