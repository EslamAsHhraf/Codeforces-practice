#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,a;
    cin >> n;
    set<ll>mySet;
    map<ll, ll>myMap;
    for (int i = 0; i < n; i++) {
        cin >> a;
        myMap[a]++;
        mySet.insert(a);
    }
    auto itr = mySet.begin();
    ll ans = 0,intial= myMap[*itr],past= *itr;
    itr++;
    for (;itr != mySet.end(); itr++) {
        if (*itr == past + 1) {
            if (myMap[*itr] <= intial) {
                ans += intial - myMap[*itr];
              
            }
            intial =myMap[*itr];
        }
        else {
            ans += intial;
            intial = myMap[*itr];
        }
        past = *itr;
    }
    ans += intial;
    cout <<ans <<endl;
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*  freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);*/
    ll t;
    cin >> t;
    while(t--)
        solve();


}