#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n, m;
	char r;
	cin >> n >> m >> r;
	vector<vector<char> > matrix(n);
	set<char >s;
	for (int i = 0; i < n; i++)
		matrix[i].resize(m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] == r)
			{
				if ((j + 1) < m&&matrix[i][j + 1] != '.'&&matrix[i][j + 1] != r)
				{
					s.insert(matrix[i][j + 1]);
				}
				if ((j - 1) >= 0 && matrix[i][j - 1] != '.'&&matrix[i][j - 1] != r)
				{
					s.insert(matrix[i][j - 1]);
				}
				if ((i + 1) < n && matrix[i + 1][j] != '.'&&matrix[i + 1][j] != r)
				{
					s.insert(matrix[i + 1][j]);
				}
				if ((i - 1) >= 0 && matrix[i - 1][j] != '.'&&matrix[i - 1][j] != r)
				{
					s.insert(matrix[i - 1][j]);
				}
			}
		}
	}

	cout << s.size();
}