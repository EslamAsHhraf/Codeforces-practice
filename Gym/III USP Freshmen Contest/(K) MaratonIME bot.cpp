#include <bits/stdc++.h>
using namespace std;
#define ll long long
char arr[200 + 3]{' '};
int main()
{
	string s = "Sussu";
	int pos = 0;
	ios_base::sync_with_stdio(0), cin.tie(0); cout.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin.getline(arr + 1, 203);
	if (find(arr+1, arr + 203, '?')!=arr+203)
	{
		cout << "7";
		return 0;
	}
	for (int i=1;i<203;i++)
	{
		if (arr[i] == s[pos])
		{
			if (pos == 0 && arr[i - 1] != ' ')
			{
				continue;
				pos = 0;
			}
			pos++;
			if (pos == s.size() )
			{
				if (arr[i + 1] == '!' || arr[i + 1] == '.' || arr[i + 1] == ' ')
				{
					cout << "AI SUSSU!";
						return 0;
				}
				else {
					pos = 0;
				}
			}
		}
		else
			pos = 0;
	}
	cout << "O cara é bom!";
}
