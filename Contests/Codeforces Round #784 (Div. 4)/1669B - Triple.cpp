#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t,n,x;
	cin >> t;
	while (t--) {
		map<int, int>mymap;
		bool flag = 1;
		cin >> n ;
		while (n--) {
			cin >> x;
			mymap[x]++;
			if (mymap[x] == 3 && flag)
			{
				cout << x << endl;
				flag = 0;
			}
		}
		if(flag)
			cout << -1 << endl;
		
	}
}