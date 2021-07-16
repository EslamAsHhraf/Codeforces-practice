#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, o, b;
	map<char, int>v;//= {{'A',0 }, {'B',0}, {'c'.0}};
	for(int i=0;i<3;i++)
	{
		cin >> a >> o>> b;
		if (o == '<')
		{
			v[b]++;
			v[a]--;
	    }
		else
		{
			v[a]++;
			v[b]--;
		}
	}
	if (v['A'] ==0&& v['B'] ==0&& v['C']==0)
		cout << "Impossible";
	else
	{
		char l = (v['A'] == -2) ? 'A' : (v['B'] == -2) ? 'B' : 'C';
		cout << l;
		l= (v['A'] == 0) ? 'A' : (v['B'] == 0) ? 'B' : 'C';
		cout << l;
		l= (v['A'] == 2) ? 'A' : (v['B'] == 2) ? 'B' : 'C';
		cout << l;
	}
}