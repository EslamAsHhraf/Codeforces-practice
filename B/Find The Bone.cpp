# include<iostream>
#include <stdio.h>
//# include<string>
# include<string>
# include<string.h>
#include <algorithm>
# include<vector>
# include<map>
# include<set>
//# include<list>
//#include <numeric> 

using namespace std;

int main()
{
	long long int n, m, x;
	cin >> n >> m >> x;
	vector< bool>w(n + 1);
	vector< bool>h(n + 1);
	int yy;
	for (int i = 0; i < m; i++)
	{
		cin >> yy;
		h[yy] = true;
	}
	long long int u, v, loc = 1;
	w[loc] = true;
	while (x > 0)
	{
		cin >> u >> v;
		if (w[loc] && h[loc])
		{
			cout << loc;
			return 0;
		}
		if (u == loc)
		{
			w[v] = 1;
			loc = v;
		}
		else if (v == loc)
		{
			w[u] = 1;
			loc = u;
		}
		x--;
	}

	cout << loc;
}