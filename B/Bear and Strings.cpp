#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n,k=0,ans=0,cnt=0;
	string s,s1="bear";
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		k = 0;
		cnt = 0;
		for (int z = i; z < s.size(); z++)
		{ 
			if (s[z] == s1[0])cnt = 1;
			else  if (s[z] == s1[cnt])cnt++;
			else cnt = 0;
			if (cnt == 4) k = 1;
			ans += k;
		}		
	}
	cout << ans;
}