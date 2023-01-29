#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n, k;
    cin >> n >> k;
    int i = 1, j = n;
    bool flag = 0;
    if (k % 2 == 0)
        flag = 1;
    while (k >1) {


        cout << i<<" ";
        k--;
        i++;
        if ( k!=1)
        {
            cout << j << " ";
            j--;
            k--;
        }
    }
    ll s = i, e = j;
    if (flag) {
        for (int z = e; z >= s; z--) {
            cout << z << " ";
        }
       
    }
    else {
        for (int z = s; z <= e; z++) {
            cout << z << " ";
        }
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