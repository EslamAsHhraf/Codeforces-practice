#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n;
    string s;
    vector<ll>v(3);
    cin >> n;
    for (int i = 0; i < 3; i++){
        cin>>s;
        map<char,ll>Mymap;
        ll Max = 0;
        for (int j = 0; j < s.size(); j++) {
            Mymap[s[j]]++;
            Max = max(Max, Mymap[s[j]]);
        }
        if (n == 1 && Max == (int)s.length()) 
            s.pop_back();
        v[i] = min(Max+n,(ll) s.size());
    }
    ll tt = *max_element(v.begin(), v.end()),count=0,kk;
    for (int i = 0; i < 3; i++) {
        if (v[i] == tt)
        {
            count++;
            kk = i;
        }
       
    }
    if (count > 1)
    {
        cout << "Draw";
    }
    else if (kk == 0) {
        cout << "Kuro";
    }
    else if (kk == 1)
    {
        cout << "Shiro";
    }
    else if (kk == 2) {
        cout << "Katie";
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