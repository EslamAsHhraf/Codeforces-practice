#include<bits/stdc++.h>
using namespace std;
#define ll  long long
int arr[109][109];
void solve()
{
    int n;
    cin >> n;
    vector<int>ans;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1 ; j++) {
            cin >> arr[i][j];
        }
    }
    map<int, int>myMap;
    for (int i = 0; i < 3; i++) {
        myMap[arr[i][0]]++;
        if (myMap[arr[i][0]] > 1)
        {
            ans.push_back(arr[i][0]);
            break;
        }
    }
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j][i] != ans[ans.size() - 1])
            {
                ans.push_back(arr[j][i]);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i]<<" ";
    }
    cout << endl;
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