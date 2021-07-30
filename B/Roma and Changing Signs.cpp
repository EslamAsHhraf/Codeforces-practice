#include<bits/stdc++.h>
using namespace std;
int main()
{
    std::ios_base::sync_with_stdio(false);//to make time less (you display the c)
	long long n, sum=0, aa,k,temp=INT_MAX;
	cin >> n>>k;
	for (int i = 0; i < n; i++)
	{
		cin >> aa;
		if (aa < 0&&k!=0)
		{
			aa *= -1;
			k--;
		}
		sum +=aa;
		temp=min(temp, aa);
		
	}	
	if(k%2!=0)
		sum += - 2 * temp;

	cout << sum;
}