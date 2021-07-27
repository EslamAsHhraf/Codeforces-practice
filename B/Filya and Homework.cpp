#include<bits/stdc++.h>
using namespace std;
int main()
{
	//std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n,aa;
	set<long long>s;
	cin >> n;
	while (n--)
	{
		cin >> aa;
		s.insert(aa);
	}
	if (s.size() > 3)
		cout << "NO";
	else if (s.size() < 3)
			cout << "YES";
	else
	{
		auto ti = s.begin();
		int x1 = *ti++;
		int x2 = *ti++;
		int x3 = *ti++;
		if (x2 - x1 == x3 - x2)
		{
			cout << "YES";
		}
		else
			cout << "NO";
	}
}