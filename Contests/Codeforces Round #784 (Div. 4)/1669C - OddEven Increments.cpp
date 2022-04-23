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
		n -= 2;
		cin >> x;
		mymap[0] = x % 2;
		cin >> x;
		mymap[1] = x % 2;
		for(int i=0;i<n;i++){
			cin >> x;
			if(flag&&mymap[i % 2] != x % 2)
			{
				cout << "No" << endl;
				flag = 0;
			}
		}
		if(flag)
			cout << "Yes" << endl;
	}
}