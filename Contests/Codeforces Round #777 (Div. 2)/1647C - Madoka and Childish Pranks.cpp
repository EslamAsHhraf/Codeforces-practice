#include<iostream>
#include<vector>
#include<string>
using namespace std;
#define ll long long
ll n, m;
string s;
void sol()
{
	cin >> n >> m;
	vector<vector<int>>v(n, vector<int>(m));
	vector<vector<int>>ch(n, vector<int>(m, 0));
	vector<string>sol;
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			v[i][j]=s[j]-48;
		}
	}
	if (v[0][0] ==1)
	{
		cout << -1 << endl;
		return;
	}
	for (int i =( n-1); i >=0 ; i--)
	{
		for (int j = (m - 1); j >= 0; j--)
		{
			if (v[i][j] == 1)
			{
				if(i>0)
					sol.push_back(to_string(i) + " " + to_string(j+1) + " " + to_string(i+1) + " " + to_string(j+1));
				else
					sol.push_back(to_string(i +1) + " " + to_string(j ) + " " + to_string(i + 1) + " " + to_string(j + 1));
			}
		}
	}
	cout << sol.size()<<endl;
	for (int i = 0; i < sol.size(); i++)
		cout << sol[i] << endl;
}
int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll t;
	cin >> t;
	while (t--)
	{
		sol();
	}
}