#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t,x;
	cin >> t;
	while (t--) {
		cin >> x ;
		if (1900 <= x)
			cout << "Division 1" << endl;
		else if(1600<=x&&x<=1899)
			cout << "Division 2" << endl;
		else if(1400<=x&&x<=1599)
			cout << "Division 3" << endl;
		else 
			cout << "Division 4" << endl;
		
	}
}