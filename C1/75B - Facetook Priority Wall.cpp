#include<bits/stdc++.h>
using namespace std;
#define ll  long long
vector<string> splitstr(string str, string deli = " ")
{
    int start = 0;
    int end = str.find(deli);
    vector<string>v;
    while (end != -1) {
       v.push_back( str.substr(start, end - start));
        start = end + deli.size();
        end = str.find(deli, start);
    }
    v.push_back(str.substr(start, end - start));
    return v;
}
bool com(pair<string, ll>a, pair<string, ll>b) {
    if (a.second == b.second)
        return a.first < b.first;
    return a.second > b.second;
}
void solve()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    map<string, ll>MyMap;
    string message;
    getline(cin, message);
    while (n--) {
        string message;
        getline(cin, message);
        vector<string>v= splitstr(message);
        if (v[1] == "posted") {
            int start = 0;
            int end = v[3].find("'s");
            string temp = v[3].substr(start, end - start);
            if (v[0] == s || temp==s) {
                MyMap[v[0]] += 15;
                MyMap[temp] += 15;
            }
            else {
                MyMap[v[0]] += 0;
                MyMap[temp] += 0;
            }
        }
        else if (v[1] == "commented") {
            int start = 0;
            int end = v[3].find("'s");
            string temp = v[3].substr(start, end - start);
            if (v[0] == s || temp == s) {
                MyMap[v[0]] += 10;
                MyMap[temp] += 10;
            }
            else {
                MyMap[v[0]] += 0;
                MyMap[temp] += 0;
            }
        }
        else {
            int start = 0;
            int end = v[2].find("'s");
            string temp = v[2].substr(start, end - start);
            if (v[0] == s || temp == s) {
                MyMap[v[0]] += 5;
                MyMap[temp] += 5;
            }
            else {
                MyMap[v[0]] += 0;
                MyMap[temp] += 0;
            }
        }

    }
    vector<pair<string, ll>>names;
    for (auto name : MyMap) {
        names.push_back({ name.first,name.second });
    }
    sort(names.begin(), names.end(), com);
    for (int i = 0; i < names.size();i++) {
        if (names[i].first==s)
            continue;
        cout << names[i].first << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();


}