#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m;
char arr[59][59] ,arr2[59][59];
void solve()
{
	char c;
	map<ll, ll>mymap;
	memset(arr, '.' ,sizeof(arr));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j= 0; j < m; j++) {
			cin >> c;
			if (c == '*')
				mymap[j]++;
			else if (c == 'o') {
				for (int z = (i-1); z >=(i- mymap[j]); z--) {
					arr[z][j] = '*';
				}
				arr[i][j] = 'o';
				mymap[j]=0;
			}
		}
	}
	for (auto i : mymap) {
		for (int z = ((n-1)); z > ((n-1) - i.second); z--) {
			arr[z][i.first] = '*';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j];
		}
		cout << endl;
	}
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
		solve();
	
}