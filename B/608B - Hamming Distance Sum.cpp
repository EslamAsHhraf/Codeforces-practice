#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>ones(200009,0);
vector<ll>zero(200009,0);
void solve()
{
	string s1, s2,temp;
	size_t found;
	cin >> s1 >> s2;
	ll sum = 0;
	for (int j = 1; j <= s2.size(); j++)
	{
		if (s2[j-1] == '1')
			ones[j] +=1;
		else
			zero[j] += 1;
		ones[j] += ones[j - 1] ;
		zero[j] += zero[j - 1] ;
	}
	for (int j = 0; j < s1.size(); j++)
	{
		if (s1[j] == '1')
			sum += zero[s2.size() + j+1 - s1.size()] - zero[ j ];
		else
			sum += ones[s2.size() + j+1 - s1.size()] - ones[ j ];
	}
	cout << sum;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	solve();

}