#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll x, y;
map<ll, ll>dig1;
map<ll, ll>dig2;
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll n, count = 0;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> x >> y;
		count += dig1[x + y];
		count += dig2[x - y];
		dig1[x+y]++;
		dig2[x-y]++;
	}
	cout << count;

}