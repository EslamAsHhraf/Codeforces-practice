#include<bits/stdc++.h>
using namespace std;
#define ll  long long
void solve()
{
    ll n,a,b;
    cin >> n;
    while (n--) {
        cin >> a >> b;
        ll temp = round(pow(a * b, 1.0 / 3.0));
        if (pow(temp,3) ==  a*b && a%temp==0 &&b%temp==0) {
          
            printf("YES\n");
        }
        else {
            printf("NO\n");
           
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