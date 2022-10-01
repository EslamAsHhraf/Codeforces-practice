#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, m,x,y,count=0;
    cin >> n;
    vector<ll>v(n,-1);
    set<ll>mySet;
    map<ll, pair<ll, ll>>myMap;
    for (int i = 0; i < n;i++) {
        cin >> x >> y;
        mySet.insert(x);
        myMap[x] = { y,i };
    }
    cin >> m;
    for (int i = 1; i <= m;i++) 
    {
        cin >> x >> y;
        auto it = mySet.lower_bound(x);
        if (it == mySet.end()) {
            it--;
            if (x >= *it && x <= (*it + myMap[*it].first) && sqrt(pow((myMap[*it].first), 2) - pow((*it - x), 2)) >= abs(y)) {
                if (v[myMap[*it].second]==-1) {
                   
                    count++;
                    v[myMap[*it].second] = i;
                }
            }
        }
        else if (it == mySet.begin())
        {
            if (x <= *it &&  x >= (*it - myMap[*it].first) && sqrt(pow((myMap[*it].first), 2) - pow((*it - x), 2)) >= abs(y)) {
                if (v[myMap[*it].second] == -1) {
                   
                    count++;
                    v[myMap[*it].second] = i;
                }
            }
        }
        else {
            if ( x<= *it && x>= (*it- myMap[*it].first) && sqrt(pow((myMap[*it].first), 2) -pow((*it - x),2) )>=abs(y)) {
                if (v[myMap[*it].second] == -1) {
                  
                    count++;
                    v[myMap[*it].second] = i;
                }
            }
            it--;
            if (x >= *it && x <= (*it + myMap[*it].first) && sqrt(pow((myMap[*it].first), 2) - pow((*it - x), 2)) >= abs(y)) {
                if (v[myMap[*it].second] == -1) {
                    
                    count++;
                    v[myMap[*it].second] = i;
                }
            }
        }
    }
    cout << count << endl;
    for (int i = 0; i < n; i++) {
        cout << v[i] << " ";
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