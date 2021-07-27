#include<bits/stdc++.h>
using namespace std;
int main()
{
	//std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, m, min = 1005, max = 0, locG = 1001, locS = 0;
	char aa;
	cin >> n >> m;
	set<long long>s;
	for (int i = 0; i < n; i++)
	{
		locG = 1001, locS = 0;
		for (int j = 0; j < m; j++)
		{
			cin >> aa;
			if (aa == 'G')
			{
				locG = j;
			}
			else if (aa == 'S')
			{
				locS = j;
				if (locG > locS)
				{
					cout << -1;
					return 0;
				}
			}
		}
		s.insert(locS - locG);
	}
	cout << s.size();
}