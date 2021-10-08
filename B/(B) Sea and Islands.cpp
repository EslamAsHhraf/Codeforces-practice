#include <bits/stdc++.h>
using namespace std;
#define ll long long
char arr[509][509] ;
int main()
{
	memset(arr, 'S', sizeof(arr));
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("consistency_chapter_1_input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	ll n, m,loc=0;
	cin >> n >> m;
	if (ceil(pow(n, 2) / 2.0) < m)
	{
		cout << "NO";
		return 0;
	}
	cout << "YES"<<endl;

	for (int i = 0; i < m; i++) {
		arr[loc / n][loc%n] = 'L';
		if (((loc / n) != (loc + 2) / n ) && (n%2==0))
		{
			if ((loc + 1) % n == 0)
				loc++;
			else
				loc+=3;
		}
		else
			loc += 2;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}
