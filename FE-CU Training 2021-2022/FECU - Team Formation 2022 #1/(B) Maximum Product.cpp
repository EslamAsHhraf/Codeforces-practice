#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,m, k;
ll solve(ll n)
{
	if (n == 0)
		return 1;
	if (n < 10)
		return n;
	else
		return max(solve(n / 10) * (n % 10),solve((n / 10) - 1) * 9);
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> n;
		cout<<solve(n);
	
}