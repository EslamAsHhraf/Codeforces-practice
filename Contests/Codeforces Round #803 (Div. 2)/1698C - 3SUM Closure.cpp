#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n,pos=0,neg=0,zero=0;
    cin >> n;
    vector<ll>v(n),temp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] > 0)
        {
            pos++;
            temp.push_back(v[i]);
        }
        else  if (v[i] < 0)
        {
            neg++;
            temp.push_back(v[i]);
        }
        else
            zero++;
    }
    if (pos > 2 || neg > 2)
    {
        cout << "NO" << endl;
        return;
    }
    for (int i = 0; i < min(1,(int)zero); i++) {
        temp.push_back(0);
    }
    for (int i = 0; i < temp.size(); i++)
    {
        for (int j = i+1; j < temp.size(); j++)
        {
            for (int z = j+1; z < temp.size(); z++)
            {
                if (find(temp.begin(), temp.end(), temp[i]+ temp[j]+ temp[z]) == temp.end())
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
     cout << "YES" << endl;
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("max-pair.in", "r", stdin);
	ll t;
	cin >> t;
	while (t--)
		solve();

}