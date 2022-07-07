#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
	ll n,k, idx=-1;
    char po;
    string s;
	cin >> s>>k;
    n = s.size();
    for (int i = 0; i < n; i++)
    {
        idx = -1;
        po = s[i];
        for (int j = i + 1; j < n; j++)
        {
            if (po < s[j])
            {
                if (k >= (j - i))
                {
                    po = s[j];
                    idx = j;
                }
            }
        }
        if (idx != -1)
        {
            for (int j = idx; j > i; j--)
                swap(s[j], s[j - 1]);
            k -= (idx - i);
        }
    }
	cout << s;
	
}

int main() {
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	//freopen("abc.in", "r", stdin);
	ll t;
	//cin >> t;
	//while (t--)
		solve();
}