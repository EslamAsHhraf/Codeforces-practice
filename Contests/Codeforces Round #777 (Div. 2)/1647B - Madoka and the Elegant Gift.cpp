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
	for (int i = 0; i < n; i++)
	{
		cin >> s;
		for (int j = 0; j < m; j++)
		{
			v[i][j]=s[j]-48;
		}
	}
	for (int i= 0; i <( n-1) ; i++)
	{
		for (int j = 0; j<(m-1); j++)
		{
			ll temp=0;
			for(int z=0;z<2;z++)
			{
				for(int w=0;w<2;w++)
				{
					temp+=v[i+z][j+w];
				}
			}
			if(temp==3)
			{
				cout<<"NO"<<endl;
				return;
			}
		}
	}
	cout<<"YES"<<endl;
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