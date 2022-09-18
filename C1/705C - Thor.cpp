#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    int n, q,ans=0,y,x;
    cin >> n >> q;
    int Max = 0;
    vector<int>unRead(n + 1),koko(n+1,-1);
    vector<pair<int, int>>event;
    for (int j = 1; j <= q;j++) 
    {
        cin >> x >> y;
        
        if (x == 1) {
            event.push_back({ y,j });
            unRead[y]++;
            ans++;
        }
        else if (x == 2) {
            koko[y] = j;
            ans -= unRead[y];
            unRead[y]=0;  
        }
        else {
            if (y > Max) {
                for (int i = Max; i < y; i++) {
                    if (event[i].second > koko[event[i].first]) {
                        ans--;
                        unRead[event[i].first]--;
                    }
                }
                Max = y;
            }
        }
        cout << ans << endl;
    }
   
}
int main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);*/
    ll t;
    /* cin >> t;*/
     /*while(t--)*/
    solve();
    


}