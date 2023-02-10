#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n;
    vector<int>v(3);
    map<string, pair<ll, vector<int>>>myMap;
    string s;
    cin >> n;
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < n; i++) {
            cin >> s;
            myMap[s].first++;
            myMap[s].second.push_back(j);
        }
    }
    for (auto i : myMap) {
        if (i.second.first == 2) {
            for (int j = 0; j < i.second.second.size(); j++) {
                v[i.second.second[j]] += 1;
            }
        }
        else if (i.second.first == 1) {
            for (int j = 0; j < i.second.second.size(); j++) {
                v[i.second.second[j]] += 3;
            }
        }
    }
    for (int j = 0; j < 3; j++)
    {
        cout << v[j] << " ";
    }
    cout << endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while (t--)
        solve();


}