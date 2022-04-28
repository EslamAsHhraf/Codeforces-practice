#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	string s1, s2;
	cin >> s1 ;
	int k=0 ;
	for (int i = s1.size()-1; i>= 0.; i--) {
		if (s1[i] == 'a')
		{
			k = i;
			break;
		}
	}
	string temp = s1;
	s2 = s1.substr(k + 1,s1.size());
	s1.erase(k+1, s1.size());
	s1.erase(remove(s1.begin(), s1.end(), 'a'),s1.end());
	if (s1.size() > s2.size())
	{
		cout << ":(";
		return;
	}
	s1 += s2;
	s2= s1.substr(s1.size()/2, s1.size());
	s1.erase(s1.size() / 2, s1.size());
	if (s1 == s2)
	{
		temp.erase(temp.size() - s2.size(), temp.size());
		cout << temp;
	}
	else
		cout << ":(";
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	/*cin >> t;
	while(t--)*/
		solve();

}